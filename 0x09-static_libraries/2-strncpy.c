#include "main.h"
#include <string.h>

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
strncpy(dest, src, n);
return (dest);
}
