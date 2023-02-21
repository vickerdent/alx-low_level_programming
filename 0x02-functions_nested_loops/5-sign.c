#include "main.h"
/**
 * print_sign - function returns 1 if value is positive,
 * 0 if value is 0, and -1 if value is negative
 * @n: An input character
 * Description: function simply returns value and a sign
 * value as indicated
 * Return: 1 if positive
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
