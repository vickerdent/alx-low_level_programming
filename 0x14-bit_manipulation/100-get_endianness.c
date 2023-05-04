#include "main.h"

/**
 * get_endianness - check the code
 * Return: 0 or 1
 */

int get_endianness(void)
{
unsigned int value = 1;
char *alph = (char *)&value;

if (*alph)
return (1);
return (0);
}
