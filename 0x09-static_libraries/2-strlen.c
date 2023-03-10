#include "main.h"

/**
 * _strlen - a function that takes a string
 * @s: An string input
 * Return: the value of a string
 */

int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;
return (len);
}
