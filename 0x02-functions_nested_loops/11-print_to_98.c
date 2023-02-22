#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function that prints to 98
 * @n: An input character
 * Description: function simply prints numbers
 * character must be a digit
 * Return: 0 always
 */
void print_to_98(int n)
{
if (n > 98)
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
else
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
return;
}
