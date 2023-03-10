#include "main.h"

/**
 * char *_strncat - a function that concatenates two strings
 * note that similar function exists.
 * @dest: An char input pointer
 * @src: Another char input pointer
 * @n: An integer input
 * Return: a pointer.
 */

char *_strncat(char *dest, char *src, int n)
{
int srclen = 0, i = 0;
char *temp = dest, *start = src;

while (*src)
{
srclen++;
src++;
}

while (*dest)
dest++;

if (n > srclen)
n = srclen;

src = start;

for (; i < n; i++)
*dest++ = *src++;
*dest = '\0';
return (temp);
}
