#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - A function that checks for uppercase character.
 * @name: A char input character
 * @f: a function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
