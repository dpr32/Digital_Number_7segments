#include <msp430.h> 
#include "customPin.h"
#include "numbers.h"

typedef void (*funcPtr)(void);

funcPtr funcArray[10] = {display_0, display_1, display_2, display_3, display_4, display_5, display_6, display_7, display_8, display_9};

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer

	P1DIR |= 0xFF;              // set all pins as outputs

	int i;
    while(1)
    {
        for(i = 0; i < 10; ++i)
        {
            funcArray[i]();             // call number display
            __delay_cycles(1000000);    // delay for 1 sec
        }
    }

	return 0;
}
