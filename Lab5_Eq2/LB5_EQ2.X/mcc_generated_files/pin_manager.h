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

// get/set KR0 aliases
#define KR0_TRIS                 TRISAbits.TRISA0
#define KR0_LAT                  LATAbits.LATA0
#define KR0_PORT                 PORTAbits.RA0
#define KR0_WPU                  WPUAbits.WPUA0
#define KR0_OD                   ODCONAbits.ODCA0
#define KR0_ANS                  ANSELAbits.ANSELA0
#define KR0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define KR0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define KR0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define KR0_GetValue()           PORTAbits.RA0
#define KR0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define KR0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define KR0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define KR0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define KR0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define KR0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define KR0_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define KR0_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set KR1 aliases
#define KR1_TRIS                 TRISAbits.TRISA1
#define KR1_LAT                  LATAbits.LATA1
#define KR1_PORT                 PORTAbits.RA1
#define KR1_WPU                  WPUAbits.WPUA1
#define KR1_OD                   ODCONAbits.ODCA1
#define KR1_ANS                  ANSELAbits.ANSELA1
#define KR1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define KR1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define KR1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define KR1_GetValue()           PORTAbits.RA1
#define KR1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define KR1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define KR1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define KR1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define KR1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define KR1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define KR1_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define KR1_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set KR2 aliases
#define KR2_TRIS                 TRISAbits.TRISA2
#define KR2_LAT                  LATAbits.LATA2
#define KR2_PORT                 PORTAbits.RA2
#define KR2_WPU                  WPUAbits.WPUA2
#define KR2_OD                   ODCONAbits.ODCA2
#define KR2_ANS                  ANSELAbits.ANSELA2
#define KR2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define KR2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define KR2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define KR2_GetValue()           PORTAbits.RA2
#define KR2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define KR2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define KR2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define KR2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define KR2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define KR2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define KR2_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define KR2_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set KR3 aliases
#define KR3_TRIS                 TRISAbits.TRISA3
#define KR3_LAT                  LATAbits.LATA3
#define KR3_PORT                 PORTAbits.RA3
#define KR3_WPU                  WPUAbits.WPUA3
#define KR3_OD                   ODCONAbits.ODCA3
#define KR3_ANS                  ANSELAbits.ANSELA3
#define KR3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define KR3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define KR3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define KR3_GetValue()           PORTAbits.RA3
#define KR3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define KR3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define KR3_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define KR3_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define KR3_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define KR3_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define KR3_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define KR3_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set KR4 aliases
#define KR4_TRIS                 TRISAbits.TRISA4
#define KR4_LAT                  LATAbits.LATA4
#define KR4_PORT                 PORTAbits.RA4
#define KR4_WPU                  WPUAbits.WPUA4
#define KR4_OD                   ODCONAbits.ODCA4
#define KR4_ANS                  ANSELAbits.ANSELA4
#define KR4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define KR4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define KR4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define KR4_GetValue()           PORTAbits.RA4
#define KR4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define KR4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define KR4_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define KR4_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define KR4_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define KR4_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define KR4_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define KR4_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set KR5 aliases
#define KR5_TRIS                 TRISAbits.TRISA5
#define KR5_LAT                  LATAbits.LATA5
#define KR5_PORT                 PORTAbits.RA5
#define KR5_WPU                  WPUAbits.WPUA5
#define KR5_OD                   ODCONAbits.ODCA5
#define KR5_ANS                  ANSELAbits.ANSELA5
#define KR5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define KR5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define KR5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define KR5_GetValue()           PORTAbits.RA5
#define KR5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define KR5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define KR5_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define KR5_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define KR5_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define KR5_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define KR5_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define KR5_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set KR6 aliases
#define KR6_TRIS                 TRISAbits.TRISA6
#define KR6_LAT                  LATAbits.LATA6
#define KR6_PORT                 PORTAbits.RA6
#define KR6_WPU                  WPUAbits.WPUA6
#define KR6_OD                   ODCONAbits.ODCA6
#define KR6_ANS                  ANSELAbits.ANSELA6
#define KR6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define KR6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define KR6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define KR6_GetValue()           PORTAbits.RA6
#define KR6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define KR6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define KR6_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define KR6_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define KR6_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define KR6_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define KR6_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define KR6_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set KR7 aliases
#define KR7_TRIS                 TRISAbits.TRISA7
#define KR7_LAT                  LATAbits.LATA7
#define KR7_PORT                 PORTAbits.RA7
#define KR7_WPU                  WPUAbits.WPUA7
#define KR7_OD                   ODCONAbits.ODCA7
#define KR7_ANS                  ANSELAbits.ANSELA7
#define KR7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define KR7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define KR7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define KR7_GetValue()           PORTAbits.RA7
#define KR7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define KR7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define KR7_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define KR7_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define KR7_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define KR7_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define KR7_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define KR7_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

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