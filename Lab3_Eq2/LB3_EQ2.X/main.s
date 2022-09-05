PROCESSOR   18F57Q43
#include    <xc.inc>
    
    ; CONFIG1
  CONFIG  FEXTOSC = OFF         ; External Oscillator Selection (Oscillator not enabled)
  CONFIG  RSTOSC = HFINTOSC_1MHZ; Reset Oscillator Selection (HFINTOSC with HFFRQ = 4 MHz and CDIV = 4:1)

; CONFIG2
  CONFIG  CLKOUTEN = OFF        ; Clock out Enable bit (CLKOUT function is disabled)
  CONFIG  PR1WAY = ON           ; PRLOCKED One-Way Set Enable bit (PRLOCKED bit can be cleared and set only once)
  CONFIG  CSWEN = ON            ; Clock Switch Enable bit (Writing to NOSC and NDIV is allowed)
  CONFIG  FCMEN = ON            ; Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor enabled)

; CONFIG3
  CONFIG  MCLRE = EXTMCLR       ; MCLR Enable bit (If LVP = 0, MCLR pin is MCLR; If LVP = 1, RE3 pin function is MCLR )
  CONFIG  PWRTS = PWRT_OFF      ; Power-up timer selection bits (PWRT is disabled)
  CONFIG  MVECEN = OFF          ; Multi-vector enable bit (Interrupt contoller does not use vector table to prioritze interrupts)
  CONFIG  IVT1WAY = ON          ; IVTLOCK bit One-way set enable bit (IVTLOCKED bit can be cleared and set only once)
  CONFIG  LPBOREN = OFF         ; Low Power BOR Enable bit (Low-Power BOR disabled)
  CONFIG  BOREN = SBORDIS       ; Brown-out Reset Enable bits (Brown-out Reset enabled , SBOREN bit is ignored)

; CONFIG4
  CONFIG  BORV = VBOR_1P9       ; Brown-out Reset Voltage Selection bits (Brown-out Reset Voltage (VBOR) set to 1.9V)
  CONFIG  ZCD = OFF             ; ZCD Disable bit (ZCD module is disabled. ZCD can be enabled by setting the ZCDSEN bit of ZCDCON)
  CONFIG  PPS1WAY = ON          ; PPSLOCK bit One-Way Set Enable bit (PPSLOCKED bit can be cleared and set only once; PPS registers remain locked after one clear/set cycle)
  CONFIG  STVREN = ON           ; Stack Full/Underflow Reset Enable bit (Stack full/underflow will cause Reset)
  CONFIG  LVP = ON              ; Low Voltage Programming Enable bit (Low voltage programming enabled. MCLR/VPP pin function is MCLR. MCLRE configuration bit is ignored)
  CONFIG  XINST = OFF           ; Extended Instruction Set Enable bit (Extended Instruction Set and Indexed Addressing Mode disabled)

; CONFIG5
  CONFIG  WDTCPS = WDTCPS_31    ; WDT Period selection bits (Divider ratio 1:65536; software control of WDTPS)
  CONFIG  WDTE = OFF            ; WDT operating mode (WDT Disabled; SWDTEN is ignored)

; CONFIG6
  CONFIG  WDTCWS = WDTCWS_7     ; WDT Window Select bits (window always open (100%); software control; keyed access not required)
  CONFIG  WDTCCS = SC           ; WDT input clock selector (Software Control)

; CONFIG7
  CONFIG  BBSIZE = BBSIZE_512   ; Boot Block Size selection bits (Boot Block size is 512 words)
  CONFIG  BBEN = OFF            ; Boot Block enable bit (Boot block disabled)
  CONFIG  SAFEN = OFF           ; Storage Area Flash enable bit (SAF disabled)
  CONFIG  DEBUG = OFF           ; Background Debugger (Background Debugger disabled)

; CONFIG8
  CONFIG  WRTB = OFF            ; Boot Block Write Protection bit (Boot Block not Write protected)
  CONFIG  WRTC = OFF            ; Configuration Register Write Protection bit (Configuration registers not Write protected)
  CONFIG  WRTD = OFF            ; Data EEPROM Write Protection bit (Data EEPROM not Write protected)
  CONFIG  WRTSAF = OFF          ; SAF Write protection bit (SAF not Write Protected)
  CONFIG  WRTAPP = OFF          ; Application Block write protection bit (Application Block not write protected)

; CONFIG10
  CONFIG  CP = OFF              ; PFM and Data EEPROM Code Protection bit (PFM and Data EEPROM code protection disabled)

PSECT UDATA_ACS
    COUNT: DS 1
    MS:	   DS 1
    TIMES: DS 1

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
    BCF	    TRISF,3,0   ;CONFIGURE PIN F.3 AS OUTPUT (ON-BOARD LED)
    BSF	    LATF,3,0    ;TURN OFF ON-BOARD LED 

LOOP:
    BSF	    LATF,3,0
    MOVLW   0XD6
    MOVWF   BANKMASK(TIMES),0
    MOVLW   0X04
    MOVWF   BANKMASK(MS),0
    CALL    DELAY; 2
    BCF	    LATF,3,0
    CALL    DELAY
    GOTO    LOOP

DELAY:
    MOVLW   0x2F		; 1xTCY
    MOVWF   BANKMASK(COUNT),0	; 1xTCY    
    
DELAY_COUNT:
    DECFSZ  BANKMASK(COUNT),1,0	; (K-1)*1 + 3) TCY
    GOTO    DELAY_COUNT		; (K-1)*2 TCY

DELAY_TIMES:
    DECFSZ BANKMASK(TIMES),1,0	;(TIMES-1)*1 + 3 TCY
    GOTO   DELAY		; (TIMES-1)*2 TCY

DELAY_TEMP:
    MOVLW   0XD6		; MS TCY
    MOVWF   BANKMASK(TIMES),0	; MS TCY
    DECFSZ  BANKMASK(MS),1,0	; (MS-1)*1 + 3 TCY
    GOTO    DELAY		; (MS-1)*2
RETURN			; 2xTCY	
END resetVec


