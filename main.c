#include <xc.h>
#define _XTAL_FREQ 20000000

void main(void) {
    TRISB = 0;  // Set PORTB as output
    TRISC = 1;  // Set PORTC as input
    
    while(1) {
        if (RC0 == 1) {
            // Loop through PORTB pins RB1 to RB7
            for (int i = 1; i <= 7; i++) {
                PORTB = (1 << i);  // Set only the ith bit of PORTB high
                __delay_ms(100);   // Delay 100 ms
            }
        } else {
            for (int i = 7; i <= 1; i--) {
                PORTB = ( 7 << i);  // Set only the ith bit of PORTB high
                __delay_ms(100);   // Delay 100 ms
            }
        }
    }

    return;
}
