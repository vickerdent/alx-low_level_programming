#include "main.h"
#include <string.h>

/**
 * *_strstr - a function that locates a substring
 * Note that similar function exists.
 * @haystack: A char input pointer
 * @needle: Another char input pointer
 * Return: a pointer.
 */

char *_strstr(char *haystack, char *needle)
{
char *ret;
ret = strstr(haystack, needle);
return (ret);
}
