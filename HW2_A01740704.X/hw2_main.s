PROCESSOR   18F57Q43
#include    <xc.inc>
#include    "config_bits.inc"

; PAGE SECTION FOR VARIABLES 
PSECT UDATA_ACS
    VAR:  DS 1
    AUX:  DS 1
    TST1:   DS 1
    TST2:   DS 1
    B1:	    DS 1
    B2:	    DS 1

PSECT	resetVec, class=CODE, reloc=2

PSECT	absdata, abs, ovrld
absdata:
    org	    0x1000

resetVec:
    goto    MAIN

PSECT code
MAIN:
    ; OSCILLATOR CONFIGURATION
    BANKSEL OSCCON1	
    MOVLW   0X62H
    MOVWF   OSCCON1,1
    MOVLW   0X02H
    MOVWF   OSCFRQ,1

    ; GPIO CONFIGURATION
    BCF	    TRISF,3,0   ;Configure Pin F3 as output (on-board LED)
    BSF	    LATF,3,0    ;Turn off on-board LED
    BSF	    TRISB,4,0	;Configure Pin B4 as input (on-board switch)
    CLRF    TRISA,0
    BANKSEL ANSELB
    CLRF    ANSELB,1
    SETF    WPUB,1

; 1) Assign literal 01101101B to Port A through WREG
    MOVLW   01101101B	;Move 0X6D to WREG
    MOVWF   LATA,1	;Move WREG to LATA (BSR)

; 2) Invert the value on WREG and assign in to a variable called VAR.
    COMF    WREG,0,0	    ;Complement WREG and save in WREG (Access Bank)
    MOVWF   BANKMASK(VAR),0 ;Move WREG to masked VAR address (Access Bank)

; 3) Use the current value on WREG and add literal 0x02. Keep the result on WREG.
    ADDLW   0x02	;Add 0x02 to WREG

; 4) Decrement WREG and keep the value on WREG
    DECF    WREG,0,0

; 5) Create a variable AUX on access RAM and load it with literal xE6, 
;    then shift its value one bit to the right using RRNCF
    MOVLW   0xE6
    MOVWF   BANKMASK(AUX),0
    RRNCF   BANKMASK(AUX),0,0

; 6) Load literal 0x67 to WREG and shit it 2 bits to the left using RLNCF
    MOVLW   0X67
    RLNCF   WREG,0,0
    RLNCF   WREG,0,0

; 7) Load literal 0xB7 to a variable called TST1 and invert only even bits. Bit order goes from 0 to 7 and are
;counted from right to left (e.g., 10110111 ?11100010). Load the result on WREG.
    MOVLW   0X07
    MOVWF   BANKMASK(B1),0
    CALL    INVERT_EVEN
INVERT_EVEN:
    MOVLW   0XB7
    MOVWF   BANKMASK(TST1),0
    BTFSC   BANKMASK(TST1),B1,0
    BTG	    BANKMASK(TST1),B1,0
    DECF    BANKMASK(B1),1,0
    DECFSZ  BANKMASK(B1),1,0
    GOTO    INVERT_EVEN
    
; 8) Load literal 0x54 to a variable called TST2 and set to 1 only odd bits. Bit order goes from 0 to 7 and are
;   counted from right to left (e.g., 01010100 ?11111110). Load the result on WREG.
    MOVLW   0X06
    MOVWF   BANKMASK(B2),0
    CALL    SET_ODD
SET_ODD:
    MOVLW   0X54
    MOVWF   BANKMASK(TST2),0
    BTFSS   BANKMASK(TST2),B2,0
    BSF	    BANKMASK(TST2),B2,0
    DECF    BANKMASK(B2),1,0
    DECFSZ  BANKMASK(B2),1,0
    GOTO    SET_ODD
    
    
; 9) Assign literal 0x23 on WREG and switch nibbles. Load the result on WREG.
    MOVLW   0X23
    SWAPF   WREG,0,0
    
; 10) Load value from PORT B to WREG. If PB4 = 1 (on-board switch), toggle RF3 (on-board LED).
LOOP:
    MOVF    PORTB,0,0
    BTFSS   WREG,4,0
    BTG	    LATF,3,0
    GOTO    LOOP
END resetVec


