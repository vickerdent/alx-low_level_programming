#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints elements
 * of an array
 * @a: An integer input
 * @n: another integer input
 * Return: nothing
 */

void print_array(int *a, int n)
{
int i = 0;

for (; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
putchar('\n');
}
