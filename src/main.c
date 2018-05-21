#include <msp430.h> 
#include "customPin.h"
#include "numbers.h"

typedef void (*funcPtr)(void);

funcPtr funcArray[10] = {display_0, display_1, display_2, display_3, display_4, display_5, display_6, display_7, display_8, display_9};

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	P1DIR |= (P1_0 + P1_1 + P1_2 + P1_3 + P1_4 + P1_5 + P1_6 + P1_7);

	int i;

    while(1)
    {
        for(i = 0; i < 10; ++i)
        {
            funcArray[i]();
            __delay_cycles(1000000);
        }
    }

	return 0;
}
