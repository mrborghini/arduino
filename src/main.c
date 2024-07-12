/*
    Feel free to use this however you like it!

    https://github.com/mrborghini/arduino
*/

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // Set the LED pin as an output
    DDRB = DDRB | (1 << DDB5);

    while (1)
    {
        // Turn the LED on
        PORTB = PORTB | (1 << PORTB5);
        _delay_ms(1000); // Wait for a second

        // Turn the LED off
        PORTB = PORTB & ~(1 << PORTB5);
        _delay_ms(1000); // Wait for another second
    }

    return 0;
}
