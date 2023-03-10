#include "main.h"

/**
 * char *_strncpy - a function that copies a string
 * note that similar function exists.
 * @dest: An char input pointer
 * @src: Another char input pointer
 * @n: An integer input
 * Return: a pointer.
 */

char *_strncpy(char *dest, char *src, int n)
{
int srclen = 0, i = 0;
char *temp = dest, *start = src;

while (*src)
{
srclen++;
src++;
}

srclen++;

if (n > srclen)
n = srclen;

src = start;

for (; i < n; i++)
*dest++ = *src++;

return (temp);
}
