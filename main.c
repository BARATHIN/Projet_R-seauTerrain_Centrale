#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define _XTAL_FREQ 20000000

// Configuration des bits du PIC16F8877A
#pragma config FOSC = HS        // Oscillateur � haute vitesse
#pragma config WDTE = OFF       // Watchdog Timer d�sactiv�
#pragma config PWRTE = OFF      // Power-up Timer d�sactiv�
#pragma config BOREN = ON       // Brown-out Reset activ�
#pragma config LVP = OFF        // Programmation basse tension d�sactiv�e
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection d�sactiv�
#pragma config WRT = OFF        // Flash Program Memory Write Enable d�sactiv�
#pragma config CP = OFF         // Flash Program Memory Code Protection d�sactiv�

unsigned int i;


void main(void) {
    
}
