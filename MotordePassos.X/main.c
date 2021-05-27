/*
 * File:   main.c
 * Author: 20185315
 *
 * Created on 21 de Maio de 2021, 14:37
 */

// Integrantes: Lucas Gabriel, Lucas Betarelli, Tiago Henrique, Mateus Paiva

#include <xc.h>
#include "config.h"
#include "delay.h"
#include "configuracao.h"
 



void main(void)
{
    motorpasso_init(4);
    
    while(1)
    {
        stepMotor(CW,360, 500);
        delay (1000);
    }
}

