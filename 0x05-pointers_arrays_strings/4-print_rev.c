#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string in reverse
 * @s: An string input
 * Return: nothing
 */

void print_rev(char *s)
{
int i;
int len = strlen(s);
for (i = len; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
