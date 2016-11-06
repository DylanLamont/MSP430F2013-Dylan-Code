#include <msp430.h> 

/*
 * main.c
 */
	void main(void)
	{
	  WDTCTL = WDTPW + WDTHOLD;                 // Stop watchdog timer
	  P1DIR |= 0x01;                            // Set P1.0 to output direction

	  for (;;)
	  {
	    volatile unsigned long i;

	    P1OUT = 0x00;                          // Toggle P1.0 using exclusive-OR

	    i = 3000000;                              // Delay
	    do (i--);
	    while (i != 0);

	  volatile unsigned long x;
	  P1OUT = 0x01;
	    x = 125000;                              // Delay
	    do (x--);
	    while (x != 0);
	  }
}
