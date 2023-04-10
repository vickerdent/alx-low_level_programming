#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: An input
 * Return: a value or 0
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int final = 0;
unsigned int start = 1;
unsigned int f_length = 0;

if (b == NULL)
return (0);

while (b[f_length])
f_length++;

while (f_length)
{
if (b[f_length - 1] != '0' && b[f_length - 1] != '1')
return (0);

if (b[f_length - 1] == '1')
final += start;
start *= 2;
f_length--;
}
return (final);
}
