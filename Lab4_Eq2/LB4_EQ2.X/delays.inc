



PSECT udata_acs
cnt1:	DS 1
cnt2:	DS 1    
    
PSECT code
delay_500us:				; La llamada "call" aporta 2 ciclos máquina.
	nop				; Aporta 1 ciclo máquina.
	movlw	164			; Aporta 1 ciclo máquina. Este es el valor de "K".
	goto	delay_us		; Aporta 2 ciclos máquina.
delay_200us:				; La llamada "call" aporta 2 ciclos máquina.
	nop				; Aporta 1 ciclo máquina.
	movlw	64			; Aporta 1 ciclo máquina. Este es el valor de "K".
	goto	delay_us		; Aporta 2 ciclos máquina.
delay_100us:				; La llamada "call" aporta 2 ciclos máquina.
	movlw	31			; Aporta 1 ciclo máquina. Este es el valor de "K".
	goto	delay_us		; Aporta 2 ciclos máquina.
delay_50us:				; La llamada "call" aporta 2 ciclos máquina.
	nop				; Aporta 1 ciclo máquina.
	movlw	14			; Aporta 1 ciclo máquina. Este es el valor de "K".
	goto	delay_us		; Aporta 2 ciclos máquina.
delay_20us:				; La llamada "call" aporta 2 ciclos máquina.
	movlw	5
	
delay_us:
	movwf   BANKMASK(cnt1),0
delay_loop:
	decfsz  BANKMASK(cnt1),1,0
	goto    delay_loop
	return  
	
; - Retardo_500micros:	2 + 1 + 1 + 2 + (2 + 3K) = 500 cm = 500 µs. (para K=164 y 4 MHz).
; - Retardo_200micros:	2 + 1 + 1 + 2 + (2 + 3K) = 200 cm = 200 µs. (para K= 64 y 4 MHz).
; - Retardo_100micros:	2     + 1 + 2 + (2 + 3K) = 100 cm = 100 µs. (para K= 31 y 4 MHz).
; - Retardo_50micros :	2 + 1 + 1 + 2 + (2 + 3K) =  50 cm =  50 µs. (para K= 14 y 4 MHz).
; - Retardo_20micros :	2     + 1     + (2 + 3K) =  20 cm =  20 µs. (para K=  5 y 4 MHz).
 
delay_200ms:				; La llamada "call" aporta 2 ciclos máquina.
	movlw	200			; Aporta 1 ciclo máquina. Este es el valor de "M".
	goto	delay_ms		; Aporta 2 ciclos máquina.
delay_100ms:				; La llamada "call" aporta 2 ciclos máquina.
	movlw	100			; Aporta 1 ciclo máquina. Este es el valor de "M".
	goto	delay_ms		; Aporta 2 ciclos máquina.
delay_50ms:				; La llamada "call" aporta 2 ciclos máquina.
	movlw	50			; Aporta 1 ciclo máquina. Este es el valor de "M".
	goto	delay_ms		; Aporta 2 ciclos máquina.
delay_20ms:				; La llamada "call" aporta 2 ciclos máquina.
	movlw	20			; Aporta 1 ciclo máquina. Este es el valor de "M".
	goto	delay_ms		; Aporta 2 ciclos máquina.
delay_10ms:				; La llamada "call" aporta 2 ciclos máquina.
	movlw	10			; Aporta 1 ciclo máquina. Este es el valor de "M".
	goto	delay_ms		; Aporta 2 ciclos máquina.
delay_5ms:				; La llamada "call" aporta 2 ciclos máquina.
	movlw	5			; Aporta 1 ciclo máquina. Este es el valor de "M".
	goto	delay_ms		; Aporta 2 ciclos máquina.
delay_2ms:				; La llamada "call" aporta 2 ciclos máquina.
	movlw	2			; Aporta 1 ciclo máquina. Este es el valor de "M".
	goto	delay_ms		; Aporta 2 ciclos máquina.
delay_1ms:				; La llamada "call" aporta 2 ciclos máquina.
	movlw	1			; Aporta 1 ciclo máquina. Este es el valor de "M".
	
delay_ms:
	movwf	BANKMASK(cnt2),0	; Aporta 1 ciclo máquina.
ext_loop:
	movlw	249			; Aporta Mx1 ciclos máquina. Este es el valor de "K".
	movwf	BANKMASK(cnt1),0	; Aporta Mx1 ciclos máquina.
int_loop:
	nop				; Aporta KxMx1 ciclos máquina.
	decfsz	BANKMASK(cnt1),1,0	; (K-1)xMx1 cm (cuando no salta) + Mx2 cm (al saltar).
	goto	int_loop		; Aporta (K-1)xMx2 ciclos máquina.
	decfsz	BANKMASK(cnt2),1,0	; (M-1)x1 cm (cuando no salta) + 2 cm (al saltar).
	goto	ext_loop		; Aporta (M-1)x2 ciclos máquina.
	return