#include "main.h"
#include <string.h>

/**
 * puts2 - a function that prints every other character
 * of a string
 * @str: An string input
 * Return: nothing
 */

void puts2(char *str)
{
int i = 0;
int len = strlen(str);
while (i < len)
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
