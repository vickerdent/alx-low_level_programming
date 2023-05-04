#include "main.h"

/**
 * flip_bits - check the code
 * @n: An input
 * @m: Another input
 * Return: 1 if successful and -1 if unsuccessful
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int maximum_value = 0;
unsigned long int turns = n ^ m;

while (turns)
{
if (turns & 1ul)
maximum_value++;
turns = turns >> 1;
}
return (maximum_value);
}
