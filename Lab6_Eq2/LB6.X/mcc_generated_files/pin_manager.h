/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F57Q43
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set SEG_A aliases
#define SEG_A_TRIS                 TRISBbits.TRISB0
#define SEG_A_LAT                  LATBbits.LATB0
#define SEG_A_PORT                 PORTBbits.RB0
#define SEG_A_WPU                  WPUBbits.WPUB0
#define SEG_A_OD                   ODCONBbits.ODCB0
#define SEG_A_ANS                  ANSELBbits.ANSELB0
#define SEG_A_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define SEG_A_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define SEG_A_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define SEG_A_GetValue()           PORTBbits.RB0
#define SEG_A_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define SEG_A_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define SEG_A_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define SEG_A_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define SEG_A_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define SEG_A_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define SEG_A_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define SEG_A_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set SEG_B aliases
#define SEG_B_TRIS                 TRISBbits.TRISB1
#define SEG_B_LAT                  LATBbits.LATB1
#define SEG_B_PORT                 PORTBbits.RB1
#define SEG_B_WPU                  WPUBbits.WPUB1
#define SEG_B_OD                   ODCONBbits.ODCB1
#define SEG_B_ANS                  ANSELBbits.ANSELB1
#define SEG_B_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define SEG_B_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define SEG_B_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define SEG_B_GetValue()           PORTBbits.RB1
#define SEG_B_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define SEG_B_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define SEG_B_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define SEG_B_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define SEG_B_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define SEG_B_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define SEG_B_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define SEG_B_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set SEG_C aliases
#define SEG_C_TRIS                 TRISBbits.TRISB2
#define SEG_C_LAT                  LATBbits.LATB2
#define SEG_C_PORT                 PORTBbits.RB2
#define SEG_C_WPU                  WPUBbits.WPUB2
#define SEG_C_OD                   ODCONBbits.ODCB2
#define SEG_C_ANS                  ANSELBbits.ANSELB2
#define SEG_C_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define SEG_C_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define SEG_C_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define SEG_C_GetValue()           PORTBbits.RB2
#define SEG_C_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define SEG_C_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define SEG_C_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define SEG_C_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define SEG_C_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define SEG_C_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define SEG_C_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define SEG_C_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set SEG_D aliases
#define SEG_D_TRIS                 TRISBbits.TRISB3
#define SEG_D_LAT                  LATBbits.LATB3
#define SEG_D_PORT                 PORTBbits.RB3
#define SEG_D_WPU                  WPUBbits.WPUB3
#define SEG_D_OD                   ODCONBbits.ODCB3
#define SEG_D_ANS                  ANSELBbits.ANSELB3
#define SEG_D_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define SEG_D_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define SEG_D_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define SEG_D_GetValue()           PORTBbits.RB3
#define SEG_D_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define SEG_D_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define SEG_D_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define SEG_D_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define SEG_D_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define SEG_D_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define SEG_D_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define SEG_D_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set SEG_E aliases
#define SEG_E_TRIS                 TRISBbits.TRISB4
#define SEG_E_LAT                  LATBbits.LATB4
#define SEG_E_PORT                 PORTBbits.RB4
#define SEG_E_WPU                  WPUBbits.WPUB4
#define SEG_E_OD                   ODCONBbits.ODCB4
#define SEG_E_ANS                  ANSELBbits.ANSELB4
#define SEG_E_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SEG_E_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SEG_E_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SEG_E_GetValue()           PORTBbits.RB4
#define SEG_E_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SEG_E_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SEG_E_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SEG_E_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SEG_E_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define SEG_E_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define SEG_E_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define SEG_E_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set SEG_F aliases
#define SEG_F_TRIS                 TRISBbits.TRISB5
#define SEG_F_LAT                  LATBbits.LATB5
#define SEG_F_PORT                 PORTBbits.RB5
#define SEG_F_WPU                  WPUBbits.WPUB5
#define SEG_F_OD                   ODCONBbits.ODCB5
#define SEG_F_ANS                  ANSELBbits.ANSELB5
#define SEG_F_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define SEG_F_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define SEG_F_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define SEG_F_GetValue()           PORTBbits.RB5
#define SEG_F_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define SEG_F_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define SEG_F_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define SEG_F_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define SEG_F_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define SEG_F_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define SEG_F_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define SEG_F_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set SEG_G aliases
#define SEG_G_TRIS                 TRISBbits.TRISB6
#define SEG_G_LAT                  LATBbits.LATB6
#define SEG_G_PORT                 PORTBbits.RB6
#define SEG_G_WPU                  WPUBbits.WPUB6
#define SEG_G_OD                   ODCONBbits.ODCB6
#define SEG_G_ANS                  ANSELBbits.ANSELB6
#define SEG_G_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define SEG_G_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define SEG_G_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define SEG_G_GetValue()           PORTBbits.RB6
#define SEG_G_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define SEG_G_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define SEG_G_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define SEG_G_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define SEG_G_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define SEG_G_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define SEG_G_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define SEG_G_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set SEG_P aliases
#define SEG_P_TRIS                 TRISBbits.TRISB7
#define SEG_P_LAT                  LATBbits.LATB7
#define SEG_P_PORT                 PORTBbits.RB7
#define SEG_P_WPU                  WPUBbits.WPUB7
#define SEG_P_OD                   ODCONBbits.ODCB7
#define SEG_P_ANS                  ANSELBbits.ANSELB7
#define SEG_P_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define SEG_P_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define SEG_P_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define SEG_P_GetValue()           PORTBbits.RB7
#define SEG_P_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define SEG_P_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define SEG_P_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define SEG_P_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define SEG_P_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define SEG_P_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define SEG_P_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define SEG_P_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set DIG_1 aliases
#define DIG_1_TRIS                 TRISCbits.TRISC0
#define DIG_1_LAT                  LATCbits.LATC0
#define DIG_1_PORT                 PORTCbits.RC0
#define DIG_1_WPU                  WPUCbits.WPUC0
#define DIG_1_OD                   ODCONCbits.ODCC0
#define DIG_1_ANS                  ANSELCbits.ANSELC0
#define DIG_1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define DIG_1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define DIG_1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define DIG_1_GetValue()           PORTCbits.RC0
#define DIG_1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define DIG_1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define DIG_1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define DIG_1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define DIG_1_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define DIG_1_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define DIG_1_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define DIG_1_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set DIG_2 aliases
#define DIG_2_TRIS                 TRISCbits.TRISC1
#define DIG_2_LAT                  LATCbits.LATC1
#define DIG_2_PORT                 PORTCbits.RC1
#define DIG_2_WPU                  WPUCbits.WPUC1
#define DIG_2_OD                   ODCONCbits.ODCC1
#define DIG_2_ANS                  ANSELCbits.ANSELC1
#define DIG_2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define DIG_2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define DIG_2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define DIG_2_GetValue()           PORTCbits.RC1
#define DIG_2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define DIG_2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define DIG_2_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define DIG_2_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define DIG_2_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define DIG_2_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define DIG_2_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define DIG_2_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set DIG_3 aliases
#define DIG_3_TRIS                 TRISCbits.TRISC2
#define DIG_3_LAT                  LATCbits.LATC2
#define DIG_3_PORT                 PORTCbits.RC2
#define DIG_3_WPU                  WPUCbits.WPUC2
#define DIG_3_OD                   ODCONCbits.ODCC2
#define DIG_3_ANS                  ANSELCbits.ANSELC2
#define DIG_3_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define DIG_3_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define DIG_3_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define DIG_3_GetValue()           PORTCbits.RC2
#define DIG_3_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define DIG_3_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define DIG_3_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define DIG_3_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define DIG_3_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define DIG_3_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define DIG_3_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define DIG_3_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set DIG_4 aliases
#define DIG_4_TRIS                 TRISCbits.TRISC3
#define DIG_4_LAT                  LATCbits.LATC3
#define DIG_4_PORT                 PORTCbits.RC3
#define DIG_4_WPU                  WPUCbits.WPUC3
#define DIG_4_OD                   ODCONCbits.ODCC3
#define DIG_4_ANS                  ANSELCbits.ANSELC3
#define DIG_4_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define DIG_4_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define DIG_4_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define DIG_4_GetValue()           PORTCbits.RC3
#define DIG_4_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define DIG_4_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define DIG_4_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define DIG_4_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define DIG_4_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define DIG_4_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define DIG_4_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define DIG_4_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set KRO1 aliases
#define KRO1_TRIS                 TRISFbits.TRISF0
#define KRO1_LAT                  LATFbits.LATF0
#define KRO1_PORT                 PORTFbits.RF0
#define KRO1_WPU                  WPUFbits.WPUF0
#define KRO1_OD                   ODCONFbits.ODCF0
#define KRO1_ANS                  ANSELFbits.ANSELF0
#define KRO1_SetHigh()            do { LATFbits.LATF0 = 1; } while(0)
#define KRO1_SetLow()             do { LATFbits.LATF0 = 0; } while(0)
#define KRO1_Toggle()             do { LATFbits.LATF0 = ~LATFbits.LATF0; } while(0)
#define KRO1_GetValue()           PORTFbits.RF0
#define KRO1_SetDigitalInput()    do { TRISFbits.TRISF0 = 1; } while(0)
#define KRO1_SetDigitalOutput()   do { TRISFbits.TRISF0 = 0; } while(0)
#define KRO1_SetPullup()          do { WPUFbits.WPUF0 = 1; } while(0)
#define KRO1_ResetPullup()        do { WPUFbits.WPUF0 = 0; } while(0)
#define KRO1_SetPushPull()        do { ODCONFbits.ODCF0 = 0; } while(0)
#define KRO1_SetOpenDrain()       do { ODCONFbits.ODCF0 = 1; } while(0)
#define KRO1_SetAnalogMode()      do { ANSELFbits.ANSELF0 = 1; } while(0)
#define KRO1_SetDigitalMode()     do { ANSELFbits.ANSELF0 = 0; } while(0)

// get/set KRO2 aliases
#define KRO2_TRIS                 TRISFbits.TRISF1
#define KRO2_LAT                  LATFbits.LATF1
#define KRO2_PORT                 PORTFbits.RF1
#define KRO2_WPU                  WPUFbits.WPUF1
#define KRO2_OD                   ODCONFbits.ODCF1
#define KRO2_ANS                  ANSELFbits.ANSELF1
#define KRO2_SetHigh()            do { LATFbits.LATF1 = 1; } while(0)
#define KRO2_SetLow()             do { LATFbits.LATF1 = 0; } while(0)
#define KRO2_Toggle()             do { LATFbits.LATF1 = ~LATFbits.LATF1; } while(0)
#define KRO2_GetValue()           PORTFbits.RF1
#define KRO2_SetDigitalInput()    do { TRISFbits.TRISF1 = 1; } while(0)
#define KRO2_SetDigitalOutput()   do { TRISFbits.TRISF1 = 0; } while(0)
#define KRO2_SetPullup()          do { WPUFbits.WPUF1 = 1; } while(0)
#define KRO2_ResetPullup()        do { WPUFbits.WPUF1 = 0; } while(0)
#define KRO2_SetPushPull()        do { ODCONFbits.ODCF1 = 0; } while(0)
#define KRO2_SetOpenDrain()       do { ODCONFbits.ODCF1 = 1; } while(0)
#define KRO2_SetAnalogMode()      do { ANSELFbits.ANSELF1 = 1; } while(0)
#define KRO2_SetDigitalMode()     do { ANSELFbits.ANSELF1 = 0; } while(0)

// get/set KRO3 aliases
#define KRO3_TRIS                 TRISFbits.TRISF2
#define KRO3_LAT                  LATFbits.LATF2
#define KRO3_PORT                 PORTFbits.RF2
#define KRO3_WPU                  WPUFbits.WPUF2
#define KRO3_OD                   ODCONFbits.ODCF2
#define KRO3_ANS                  ANSELFbits.ANSELF2
#define KRO3_SetHigh()            do { LATFbits.LATF2 = 1; } while(0)
#define KRO3_SetLow()             do { LATFbits.LATF2 = 0; } while(0)
#define KRO3_Toggle()             do { LATFbits.LATF2 = ~LATFbits.LATF2; } while(0)
#define KRO3_GetValue()           PORTFbits.RF2
#define KRO3_SetDigitalInput()    do { TRISFbits.TRISF2 = 1; } while(0)
#define KRO3_SetDigitalOutput()   do { TRISFbits.TRISF2 = 0; } while(0)
#define KRO3_SetPullup()          do { WPUFbits.WPUF2 = 1; } while(0)
#define KRO3_ResetPullup()        do { WPUFbits.WPUF2 = 0; } while(0)
#define KRO3_SetPushPull()        do { ODCONFbits.ODCF2 = 0; } while(0)
#define KRO3_SetOpenDrain()       do { ODCONFbits.ODCF2 = 1; } while(0)
#define KRO3_SetAnalogMode()      do { ANSELFbits.ANSELF2 = 1; } while(0)
#define KRO3_SetDigitalMode()     do { ANSELFbits.ANSELF2 = 0; } while(0)

// get/set KRO4 aliases
#define KRO4_TRIS                 TRISFbits.TRISF3
#define KRO4_LAT                  LATFbits.LATF3
#define KRO4_PORT                 PORTFbits.RF3
#define KRO4_WPU                  WPUFbits.WPUF3
#define KRO4_OD                   ODCONFbits.ODCF3
#define KRO4_ANS                  ANSELFbits.ANSELF3
#define KRO4_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define KRO4_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define KRO4_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define KRO4_GetValue()           PORTFbits.RF3
#define KRO4_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define KRO4_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define KRO4_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define KRO4_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define KRO4_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define KRO4_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define KRO4_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define KRO4_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

// get/set KCI1 aliases
#define KCI1_TRIS                 TRISFbits.TRISF4
#define KCI1_LAT                  LATFbits.LATF4
#define KCI1_PORT                 PORTFbits.RF4
#define KCI1_WPU                  WPUFbits.WPUF4
#define KCI1_OD                   ODCONFbits.ODCF4
#define KCI1_ANS                  ANSELFbits.ANSELF4
#define KCI1_SetHigh()            do { LATFbits.LATF4 = 1; } while(0)
#define KCI1_SetLow()             do { LATFbits.LATF4 = 0; } while(0)
#define KCI1_Toggle()             do { LATFbits.LATF4 = ~LATFbits.LATF4; } while(0)
#define KCI1_GetValue()           PORTFbits.RF4
#define KCI1_SetDigitalInput()    do { TRISFbits.TRISF4 = 1; } while(0)
#define KCI1_SetDigitalOutput()   do { TRISFbits.TRISF4 = 0; } while(0)
#define KCI1_SetPullup()          do { WPUFbits.WPUF4 = 1; } while(0)
#define KCI1_ResetPullup()        do { WPUFbits.WPUF4 = 0; } while(0)
#define KCI1_SetPushPull()        do { ODCONFbits.ODCF4 = 0; } while(0)
#define KCI1_SetOpenDrain()       do { ODCONFbits.ODCF4 = 1; } while(0)
#define KCI1_SetAnalogMode()      do { ANSELFbits.ANSELF4 = 1; } while(0)
#define KCI1_SetDigitalMode()     do { ANSELFbits.ANSELF4 = 0; } while(0)

// get/set KCI2 aliases
#define KCI2_TRIS                 TRISFbits.TRISF5
#define KCI2_LAT                  LATFbits.LATF5
#define KCI2_PORT                 PORTFbits.RF5
#define KCI2_WPU                  WPUFbits.WPUF5
#define KCI2_OD                   ODCONFbits.ODCF5
#define KCI2_ANS                  ANSELFbits.ANSELF5
#define KCI2_SetHigh()            do { LATFbits.LATF5 = 1; } while(0)
#define KCI2_SetLow()             do { LATFbits.LATF5 = 0; } while(0)
#define KCI2_Toggle()             do { LATFbits.LATF5 = ~LATFbits.LATF5; } while(0)
#define KCI2_GetValue()           PORTFbits.RF5
#define KCI2_SetDigitalInput()    do { TRISFbits.TRISF5 = 1; } while(0)
#define KCI2_SetDigitalOutput()   do { TRISFbits.TRISF5 = 0; } while(0)
#define KCI2_SetPullup()          do { WPUFbits.WPUF5 = 1; } while(0)
#define KCI2_ResetPullup()        do { WPUFbits.WPUF5 = 0; } while(0)
#define KCI2_SetPushPull()        do { ODCONFbits.ODCF5 = 0; } while(0)
#define KCI2_SetOpenDrain()       do { ODCONFbits.ODCF5 = 1; } while(0)
#define KCI2_SetAnalogMode()      do { ANSELFbits.ANSELF5 = 1; } while(0)
#define KCI2_SetDigitalMode()     do { ANSELFbits.ANSELF5 = 0; } while(0)

// get/set KCI3 aliases
#define KCI3_TRIS                 TRISFbits.TRISF6
#define KCI3_LAT                  LATFbits.LATF6
#define KCI3_PORT                 PORTFbits.RF6
#define KCI3_WPU                  WPUFbits.WPUF6
#define KCI3_OD                   ODCONFbits.ODCF6
#define KCI3_ANS                  ANSELFbits.ANSELF6
#define KCI3_SetHigh()            do { LATFbits.LATF6 = 1; } while(0)
#define KCI3_SetLow()             do { LATFbits.LATF6 = 0; } while(0)
#define KCI3_Toggle()             do { LATFbits.LATF6 = ~LATFbits.LATF6; } while(0)
#define KCI3_GetValue()           PORTFbits.RF6
#define KCI3_SetDigitalInput()    do { TRISFbits.TRISF6 = 1; } while(0)
#define KCI3_SetDigitalOutput()   do { TRISFbits.TRISF6 = 0; } while(0)
#define KCI3_SetPullup()          do { WPUFbits.WPUF6 = 1; } while(0)
#define KCI3_ResetPullup()        do { WPUFbits.WPUF6 = 0; } while(0)
#define KCI3_SetPushPull()        do { ODCONFbits.ODCF6 = 0; } while(0)
#define KCI3_SetOpenDrain()       do { ODCONFbits.ODCF6 = 1; } while(0)
#define KCI3_SetAnalogMode()      do { ANSELFbits.ANSELF6 = 1; } while(0)
#define KCI3_SetDigitalMode()     do { ANSELFbits.ANSELF6 = 0; } while(0)

// get/set KCI4 aliases
#define KCI4_TRIS                 TRISFbits.TRISF7
#define KCI4_LAT                  LATFbits.LATF7
#define KCI4_PORT                 PORTFbits.RF7
#define KCI4_WPU                  WPUFbits.WPUF7
#define KCI4_OD                   ODCONFbits.ODCF7
#define KCI4_ANS                  ANSELFbits.ANSELF7
#define KCI4_SetHigh()            do { LATFbits.LATF7 = 1; } while(0)
#define KCI4_SetLow()             do { LATFbits.LATF7 = 0; } while(0)
#define KCI4_Toggle()             do { LATFbits.LATF7 = ~LATFbits.LATF7; } while(0)
#define KCI4_GetValue()           PORTFbits.RF7
#define KCI4_SetDigitalInput()    do { TRISFbits.TRISF7 = 1; } while(0)
#define KCI4_SetDigitalOutput()   do { TRISFbits.TRISF7 = 0; } while(0)
#define KCI4_SetPullup()          do { WPUFbits.WPUF7 = 1; } while(0)
#define KCI4_ResetPullup()        do { WPUFbits.WPUF7 = 0; } while(0)
#define KCI4_SetPushPull()        do { ODCONFbits.ODCF7 = 0; } while(0)
#define KCI4_SetOpenDrain()       do { ODCONFbits.ODCF7 = 1; } while(0)
#define KCI4_SetAnalogMode()      do { ANSELFbits.ANSELF7 = 1; } while(0)
#define KCI4_SetDigitalMode()     do { ANSELFbits.ANSELF7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/