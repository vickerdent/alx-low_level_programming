#include "main.h"

/**
 * clear_bit - check the code
 * @n: An input
 * @index: Another input
 * Return: 1 if successful and -1 if unsuccessful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int in_placeholder = index;

if (in_placeholder > 63)
return (-1);

*n = *n & ~(1ul << in_placeholder);
return (1);
}
