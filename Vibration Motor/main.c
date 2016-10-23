/*
 * main.c
 */
//#include <msp430.h>
int main(void) {
	int a = 50000;
	P1OUT = 0x01;
	for (;;){
		P1OUT ^= 0x01;
	do{
		a--;
	}while (a>0);
	}
	
}
