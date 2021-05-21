/*
 * File:   main.c
 * Author: 20185315
 *
 * Created on 21 de Maio de 2021, 14:37
 */

// Integrantes: Lucas Gabriel, Lucas Betarelli, Tiago Henrique, Matheus Paiva

#include <xc.h>
#include "config.h"
#include "delay.h"

#define PORTDbits.RD2   A-    
#define PORTDbits.RD3   B-    
#define PORTDbits.RD4   A+    
#define PORTDbits.RD5   B+    

void main(void)
{
    while(1)
    {
        A+ = 1;
        delay(1000);
    }
}
