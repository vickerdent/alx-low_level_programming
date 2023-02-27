#include "main.h"

/**
 * swap_int - a function that swaps values of two integers
 * @a: An integer input
 * @b: Another integer input
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
