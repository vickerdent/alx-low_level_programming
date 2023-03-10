#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * note that similar function exists.
 * @dest: A char input pointer
 * @src: Another char input pointer
 * @n: An integer input
 * Return: a pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *start = dest;
while (n--)
{
*dest = *src;
src++;
dest++;
}
return (start);
}
