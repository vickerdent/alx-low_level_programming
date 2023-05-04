#include "main.h"

/**
 * get_bit - check the code
 * @n: An input
 * @index: Another input
 * Return: a value or -1 if unsuccessful
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int maximum_value = 0x01;

maximum_value <<= index;
if (maximum_value == 0)
return (-1);

if ((n & maximum_value))
return (1);
else
return (0);
}
