#include <msp430.h> 

#include "numbers.h"
#include "customPin.h"
#include "constants.h"

unsigned int i = 0;
unsigned int timerCount = 0;

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR |= 0xFF;              // set all pins as outputs

	CCTL0 = CCIE;               // CCR0 interrupt enabled
	TACTL = TASSEL_2 + MC_2;    // set the timer A to SMCLCK, Continuous

	__bis_SR_register(LPM0_bits + GIE);     // Enter LPM0 w/ interrupt

    while(1)
    {}
}

// Timer A0 interrupt service routine
#pragma vector=TIMER0_A0_VECTOR
__interrupt void Timer_A (void)
{
    timerCount = (timerCount + 1) % SECOND;

    if(timerCount == 0)
    {
      funcArray[i]();
      i = (i + 1) % 10;
    }

}
