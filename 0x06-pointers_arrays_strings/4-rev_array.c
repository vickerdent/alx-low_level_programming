#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - function that reverses the content
 * of an array of integers
 * @a: An integer input pointer
 * @n: Another integer input pointer
 * Return: a pointer.
 */

void reverse_array(int *a, int n)
{
int i;
int temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
