#include "main.h"

/**
 * clear_bit - check the code
 * @n: An input
 * @index: Another input
 * Return: 1 if successful and -1 if unsuccessful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int maximum_value = 0x01;

maximum_value = ~(maximum_value << index);
if (maximum_value == 0x00)
return (-1);
*n &= maximum_value;
return (1);
}
