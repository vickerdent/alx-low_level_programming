#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - check the code
 * @array: An integer input character
 * @size: A variable input
 * @action: a function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

if (action == NULL || array == NULL)
return;

for (; i < size; i++)
action(array[i]);
}
