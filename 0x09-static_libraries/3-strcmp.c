#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: An char input pointer
 * @s2: Another char input pointer
 * Return: a pointer.
 */

int _strcmp(char *s1, char *s2)
{
int s1len = 0, s2len = 0;
char *s1start = s1, *s2start = s2;

while (*s1)
{
s1len++;
s1++;
}
s1 = s1start;

while (*s2)
{
s2len++;
s2++;
}
s2 = s2start;

if (s1 > s2)
return (15);

else if (s1 < s2)
return (-15);

while (*s1)
{
if (*s1 < *s2)
return (-15);
if (*s1 > *s2)
return (15);
s1++;
s2++;
}
return (0);
}
