/*
 * File:   newmain.c
 * Author: Tito
 *
 * Created on October 11, 2022, 1:48 AM
 */


#include <xc.h>
#include "sam.h"
#include "mcc_generated_files/mcc.h"
#include <stdint.h>
#include <math.h>

#define SWEEP_FREQ 1000

void main(void) {
    int main(void) {
    uint8_t char_to_seg(uint8_t);
void    send_to_disp(uint32_t);

uint8_t char_to_seg(uint8_t num){
    uint8_t segments;
    switch(num){
        case 0:  segments = 0b00111111; break;
        case 1:  segments = 0b00000110; break;
        case 2:  segments = 0b01011011; break;
        case 3:  segments = 0b01001111; break;
        case 4:  segments = 0b01100110; break;
        case 5:  segments = 0b01101101; break;
        case 6:  segments = 0b01111101; break;
        case 7:  segments = 0b00000111; break;
        case 8:  segments = 0b01111111; break;
        case 9:  segments = 0b01100111; break;
        case 10: segments = 0b01110111; break;
        case 11: segments = 0b01111100; break;
        case 12: segments = 0b01011000; break;
        case 13: segments = 0b01011110; break;
        case 14: segments = 0b01111001; break;
        default: segments = 0b01110001; break;
    }
    return segments;
}
void send_to_disp(uint32_t disp_word){
    for (char i = 0; i < 4; i++){
        int internal_sweep = (int) pow(2, i);
        int sweep = 0x0F & ~internal_sweep;
        LATC = (char) sweep;
        uint8_t num_disp = 0x000000FF & (disp_word >> i*8);
        LATB = char_to_seg(num_disp);
        __delay_ms(SWEEP_FREQ);
    }
}
void main(void) {
    // Initialize the device
    SYSTEM_Initialize();
   
    while (1){
        uint32_t num = 0x0A0B0C0D;
        send_to_disp(num);
    }
}
    while (1) {
    }
}

    return;
}
