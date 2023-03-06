#include "main.h"
#include <string.h>

/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: An int input pointer
 * @size: Another int input
 * Return: a pointer.
 */

void print_diagsums(int *a, int size)
{
int i;
int max = size * size;
int sum1 = 0;
int sum2 = 0;

for (i = 0; i < max; i += size + 1)
sum1 += a[i];

for (i = size - 1; i < max - 1; i += size - 1)
sum2 += a[i];

printf("%d, %d\n", sum1, sum2);
}
