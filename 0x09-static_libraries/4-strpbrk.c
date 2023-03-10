#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - a function that searches a string for
 * any of a set of bytes. Note that similar function exists.
 * @s: A char input pointer
 * @accept: Another char input pointer
 * Return: a pointer.
 */

char *_strpbrk(char *s, char *accept)
{
char *start = accept;
while (*s)
{
while (*accept)
{
if (*accept == *s)
return (s);
accept++;
}

accept = start;
s++;
}
return (NULL);
}
