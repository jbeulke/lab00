/* 
 * File:   led.c
 * Author: James Beulke
 *
 * Created on August 27, 2015, 3:15 PM
 */

#include <xc.h>
#include "led.h"


#define OUTPUT 0
#define INPUT 1
#define ON 1
#define OFF 0
void initLEDs(){
    
    //TODO: Initialize LEDs
    TRISDbits.TRISD0 = OUTPUT;
    TRISDbits.TRISD1 = OUTPUT;
    TRISDbits.TRISD2 = OUTPUT;
  
    LATDbits.LATD0=OUTPUT;
    LATDbits.LATD1=OUTPUT;
    LATDbits.LATD2=OUTPUT;
}

void turnOnLED(int led){
    switch (led){
        case 0:
            LATDbits.LATD0=1;
            LATDbits.LATD1=0;
            LATDbits.LATD2=0;
            break;
        case 1:
            LATDbits.LATD0=0;
            LATDbits.LATD1=1;
            LATDbits.LATD2=0;
            break;
        case 2:
            LATDbits.LATD0=0;
            LATDbits.LATD1=0;
            LATDbits.LATD2=1;
            break;
        default:
            LATDbits.LATD0=0;
            LATDbits.LATD1=0;
            LATDbits.LATD2=0;
            break;
     
    }}
    
    
    /*
    //TODO: You may choose to write this function
    // as a matter of convenience
   if(led == 1){
        LED1 = ON;
        LED2 = OFF;
        LED3 = OFF;
    }
    else if(led == 2){
        LED1 = OFF;
        LED2 = ON;
        LED3 = OFF;
    }
    else if(led == 3){
        LED1 = OFF;
        LED2 = OFF;
        LED3 = ON;
    */
    
