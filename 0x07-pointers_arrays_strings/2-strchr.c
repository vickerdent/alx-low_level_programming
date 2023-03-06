#include "main.h"
#include <string.h>

/**
 * *_strchr - a function that locates a character in a string
 * note that similar function exists.
 * @s: A char input pointer
 * @c: Another char input pointer
 * Return: a pointer.
 */

char *_strchr(char *s, char c)
{
char *ret;
ret = strchr(s, c);
return (ret);
}
