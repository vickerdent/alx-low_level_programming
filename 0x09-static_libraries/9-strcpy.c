#include "main.h"

/**
 * *_strcpy - a function that copies the values
 * of a string to another string
 * @src: A string input
 * @dest: A string input
 * Return: the pointer to a variable
 */

char *_strcpy(char *dest, char *src)
{
char *aux = dest;

while (*src)
*dest++ = *src++;
return (aux);
}
