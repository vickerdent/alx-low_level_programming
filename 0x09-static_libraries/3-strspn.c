#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * note that similar function exists.
 * @s: A char input pointer
 * @accept: Another char input pointer
 * Return: a pointer.
 */

unsigned int _strspn(char *s, char *accept)
{
int count = 0, flag;
char *start = accept;

while (*s)
{
flag = 0;
while (*accept)
{
if (*accept == *s)
{
count++;
flag = 1;
break;
}
accept++;
}
s++;
accept = start;
if (flag == 0)
break;
}
return (count);
}
