#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define _XTAL_FREQ 20000000

// Configuration des bits du PIC16F8877A
#pragma config FOSC = HS        // Oscillateur à haute vitesse
#pragma config WDTE = OFF       // Watchdog Timer désactivé
#pragma config PWRTE = OFF      // Power-up Timer désactivé
#pragma config BOREN = ON       // Brown-out Reset activé
#pragma config LVP = OFF        // Programmation basse tension désactivée
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection désactivé
#pragma config WRT = OFF        // Flash Program Memory Write Enable désactivé
#pragma config CP = OFF         // Flash Program Memory Code Protection désactivé

unsigned int i;


void main(void) {
    
}
