/*
 * File:   pic.c
 * Author: Dell
 *
 * Created on 9 June, 2025, 12:47 PM
 */


// PIC16F887 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1
#pragma config FOSC = INTRC_NOCLKOUT// Oscillator Selection bits (INTOSCIO oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = ON       // Power-up Timer Enable bit (PWRT enabled)
#pragma config MCLRE = ON       // RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = OFF      // Brown Out Reset Selection bits (BOR disabled)
#pragma config IESO = ON        // Internal External Switchover bit (Internal/External Switchover mode is enabled)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is enabled)
#pragma config LVP = OFF        // Low Voltage Programming Enable bit (RB3 pin has digital I/O, HV on MCLR must be used for programming)

// CONFIG2
#pragma config BOR4V = BOR40V   // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.
#include <xc.h>
void delay(unsigned int a)
    {
        while(a--);
    }
void lcd(char rs, char data) {
    RE0 = rs;
    PORTD = data;
    RE1 = 1;
    for (int i = 0; i < 100; i++);
    RE1 = 0;
    for (int i = 0; i < 100; i++);
}
void string(char*str) {
    while (*str) {
        lcd(1, *str++);
    }
}
int a=0;
int s=0;
void main()
{
    PORTA=PORTB=PORTC=PORTD=PORTE=0X00;
    TRISA=0X0F;
    TRISB=0X00;
    TRISC=0X0F;
    TRISD=TRISE=0X00;
    ANSEL=ANSELH=0X00;
     lcd(0, 0X38);
    lcd(0, 0X0E); 
    
    while(1)
    {
        if(RA0==1)
        {
            a=0;
        }
        if(RA1==1)
        {
            a=1;
        }
        if(RA2==1)
        {
            a=2;
        }
        if(RA3==1)
        {
            a=3;
        }
        
        if(RC0==1)
        {
            s=0;
        }
          if(RC1==1)
        {
            s=1;
        }
         if(RC2==1)
        {
            s=2;
        }
          if(RC3==1)
        {
            s=3;
        }
        
        
        if(a>s)
        {
            PORTB=0X40;
        }
        if(a<s)
        {
            PORTB=0X80;
        }
        if(a==s)
        {
            PORTB=0X00;
        }
        
        
        
  
    }

}