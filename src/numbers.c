/*
 * numbers.c
 *
 *  Created on: May 20, 2018
 *      Author: Devan
 */
#include "customPin.h"
#include <msp430.h>

void display_0(void)
{
    P1OUT &= ~(P1_0 + P1_1 + P1_2 + P1_3 + P1_4 + P1_5 + P1_6 + P1_7);
    P1OUT |= (P1_0 + P1_1 + P1_2 + P1_3 + P1_4 + P1_5);
}

void display_1(void)
{
    P1OUT &= ~(P1_0 + P1_1 + P1_2 + P1_3 + P1_4 + P1_5 + P1_6 + P1_7);
    P1OUT |= (P1_1 + P1_2);
}

void display_2(void)
{
    P1OUT &= ~(P1_0 + P1_1 + P1_2 + P1_3 + P1_4 + P1_5 + P1_6 + P1_7);
    P1OUT |= (P1_0 + P1_1 + P1_3 + P1_4 + P1_6);
}

void display_3(void)
{
    P1OUT &= ~(P1_0 + P1_1 + P1_2 + P1_3 + P1_4 + P1_5 + P1_6 + P1_7);
    P1OUT |= (P1_0 + P1_1 + P1_2 + P1_3 + P1_6);
}

void display_4(void)
{
    P1OUT &= ~(P1_0 + P1_1 + P1_2 + P1_3 + P1_4 + P1_5 + P1_6 + P1_7);
    P1OUT |= (P1_1 + P1_2 + P1_5 + P1_6);
}

void display_5(void)
{
    P1OUT &= ~(P1_0 + P1_1 + P1_2 + P1_3 + P1_4 + P1_5 + P1_6 + P1_7);
    P1OUT |= (P1_0 + P1_2 + P1_3 + P1_5 + P1_6);
}

void display_6(void)
{
    P1OUT &= ~(P1_0 + P1_1 + P1_2 + P1_3 + P1_4 + P1_5 + P1_6 + P1_7);
    P1OUT |= (P1_0 + P1_2 + P1_3 + P1_4 + P1_5 + P1_6);
}

void display_7(void)
{
    P1OUT &= ~(P1_0 + P1_1 + P1_2 + P1_3 + P1_4 + P1_5 + P1_6 + P1_7);
    P1OUT |= (P1_0 + P1_1 + P1_2);
}

void display_8(void)
{
    P1OUT &= ~(P1_0 + P1_1 + P1_2 + P1_3 + P1_4 + P1_5 + P1_6 + P1_7);
    P1OUT |= (P1_0 + P1_1 + P1_2 + P1_3 + P1_4 + P1_5 + P1_6);
}

void display_9(void)
{
    P1OUT &= ~(P1_0 + P1_1 + P1_2 + P1_3 + P1_4 + P1_5 + P1_6 + P1_7);
    P1OUT |= (P1_0 + P1_1 + P1_2 + P1_5 + P1_6);
}


