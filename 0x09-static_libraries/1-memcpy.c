#include "main.h"
#include <string.h>

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
memcpy(dest, src, n);
return (dest);
}
