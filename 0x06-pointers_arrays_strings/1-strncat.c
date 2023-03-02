#include "main.h"
#include <string.h>

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
strncat(dest, src, n);
return (dest);
}
