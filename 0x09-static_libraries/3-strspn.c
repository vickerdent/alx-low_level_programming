#include "main.h"
#include <string.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 * note that similar function exists.
 * @s: A char input pointer
 * @accept: Another char input pointer
 * Return: a pointer.
 */

unsigned int _strspn(char *s, char *accept)
{
int ret;
ret = strspn(s, accept);
return (ret);
}
