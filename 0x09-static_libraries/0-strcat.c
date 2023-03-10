#include "main.h"

/**
 * char *_strcat - a function that concatenates two strings
 * note that similar function exists.
 * @dest: An char input pointer
 * @src: Another char input pointer
 * Return: a pointer.
 */

char *_strcat(char *dest, char *src)
{
char *temp = dest;

while (*dest)
dest++;
while (*src)
*dest++ = *src++;

*dest = '\0';
return (temp);
}
