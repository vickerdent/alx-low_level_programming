#include "main.h"
#include <math.h>

int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number
 * @n: An integer input
 * Return: a value
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(1, n));
}

/**
 * _sqrt - find the square root
 * @prev: previous value
 * @root: current square root value
 * Return: sqroot
 */
int _sqrt(int prev, int root)
{
if (prev > root)
return (-1);
else if (prev * prev == root)
return (prev);
return (_sqrt(prev + 1, root));
}
