#include "main.h"
#include <math.h>

/**
 * _pow_recursion - a function that returns
 * the value of x raised to the power of y
 * @x: An integer input
 * @y: Another integer input
 * Return: a value
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
else if (y < 0)
return (-1);
else if (y == 1)
return (x);
return (x *= _pow_recursion(x, y - 1));
}
