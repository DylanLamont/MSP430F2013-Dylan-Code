#include <msp430.h> 

/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	P1DIR |= 0x01;
	//P1OUT = 0x01;
	int a = 0;
for (;;){
		P1OUT^=0x01;
	for ( a = 0 ; a<200000; a++){

	}
}
}

