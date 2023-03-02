#include "main.h"
#include <stdlib.h>

/**
 * *string_toupper - function that changes all
 * lowercase letters of a string to uppercase
 * @a: A char input pointer
 * Return: a pointer.
 */

char *string_toupper(char *a)
{
int i;
for (i = 0; a[i] != '\0'; i++)
{
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] = a[i] - 32;
}
}
return (a);
}
