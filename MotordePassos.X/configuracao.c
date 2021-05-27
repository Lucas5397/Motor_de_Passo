/*
 * File:   configuracao.c
 * Author: 20185210
 *
 * Created on 26 de Maio de 2021, 15:02
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "configuracao.h"

int ppr; 

void motorpasso_init (int pulsosporrevolucao ) 
{
    // definição de entrada ou saida
    TRISDbits.TRISD0 = 0;
    TRISDbits.TRISD1 = 0;
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD3 = 0; 
    // começo com os pinos zerados
    PORTDbits.RD0 = 0;
    PORTDbits.RD1 = 0;
    PORTDbits.RD2 = 0;
    PORTDbits.RD3 = 0;
    
    ppr = pulsosporrevolucao;
}

char passos [8] = { 0x02,0x06, 0x04,0x05, 0x01,0x09,0x08, 0x0A};
char indice = 0;

void stepMotor( char sentido, int graus, int t) 
{
    int numpassos;
    int i;
    numpassos = (graus * ppr)/180;
    for ( i = 0; i<numpassos; i++)
    {
        PORTD = (( PORTD & 0XF0) | passos[indice] );
        indice = (indice + sentido) % 8;
        delay(t);
    }
}





