#include <reg51.h>

void main(void)
{
    unsigned char hexa = 0xFF;  // 255 in decimal
    unsigned char hundreds, tens, units;

    // Extract decimal digits correctly
    units = hexa % 10;         // Get unit place (5)
    hexa  = hexa / 10;         // Remove unit place

    tens = hexa % 10;          // Get tens place (5)
    hundreds = hexa / 10;      // Get hundreds place (2)

    // Output to Ports
    P0 = units;                // Display units on Port 0
    P1 = tens;                 // Display tens on Port 1
    P2 = hundreds;             // Display hundreds on Port 2

    while(1);
}
