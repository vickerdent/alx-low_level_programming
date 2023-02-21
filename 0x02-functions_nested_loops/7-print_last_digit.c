#include "main.h"
#include <ctype.h>
/**
 * print_last_digit - function prints the last digit
 * @c: An input character
 * Description: function simply prints a digit
 * character must be a digit
 * Return: the value of the last digit
 */
int print_last_digit(int c)
{
int i;
if (c < 0)
i = -1 * (c % 10);
else
i = c % 10;
_putchar((i % 10) + '0');
return (i % 10);
}
