#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverses a string
 * @s: An string input
 * Return: nothing
 */

void rev_string(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;
while (len)
_putchar(s[--len]);
_putchar('\n');
}
