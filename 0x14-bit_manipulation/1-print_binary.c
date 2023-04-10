#include "main.h"

/**
 * print_binary - check the code
 * @n: An input
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
unsigned int signal = 0;
unsigned int maximum_value = 32768;

if (n == 0)
{
_putchar('0');
return;
}
while (maximum_value)
{
if (signal == 1 && (n & maximum_value) == 0)
_putchar('0');
else if ((n & maximum_value) != 0)
{
_putchar('1');
signal = 1;
}
maximum_value >>= 1;
}
}
