#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
char ucase = 'A';
int isupper = 0;
for (; ucase <= 'Z'; ucase++)
{
if (c == ucase)
{
isupper = 1;
break;
}
}
return (isupper);
}
