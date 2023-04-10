#include "main.h"

/**
 * flip_bits - check the code
 * @n: An input
 * @m: Another input
 * Return: 1 if successful and -1 if unsuccessful
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int maximum_value = 0x01;
unsigned int turns = 0;
unsigned long int compar = (n ^ m);

while (maximum_value <= compar)
{
if (maximum_value & compar)
turns++;
maximum_value <<= 1;
}
return (turns);
}
