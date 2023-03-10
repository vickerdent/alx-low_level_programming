#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 * note that similar function exists.
 * @s: A char input pointer
 * @b: Another char input pointer
 * @n: An integer input
 * Return: a pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
char *start = s;

while (n--)
{
*s = b;
s++;
}
return (start);
}
