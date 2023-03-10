#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * note that similar function exists.
 * @s: A char input pointer
 * @c: Another char input pointer
 * Return: a pointer.
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (c == *s)
return (s);
s++;
}
if (c == *s)
return (s);
return (NULL);
}
