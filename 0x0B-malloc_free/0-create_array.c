#include "main.h"

/**
 * *create_array - check the code
 * @size: integer input
 * @c: char input
 * Return: Always a pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
char *s;

s = malloc(size * sizeof(char));

if (s == NULL)
return (NULL);

if (size == 0)
return (NULL);
unsigned int i = 0;
while (i < size)
{
s[i] = c;
i++;
}
return (s);
}
