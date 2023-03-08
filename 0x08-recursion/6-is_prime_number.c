#include "main.h"
#include <math.h>

int is_divisible(int num, int div);

/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: An integer input
 * Return: a value
 */

int is_prime_number(int n)
{
int div = 2;
if (n <= 1)
return (0);
if (n <= 3)
return (1);
return (is_divisible(n, div));
}

/**
 * is_divisible - check if num is divisible
 * @num: the number input
 * @div: the result
 * Return: 1 if num is divisible
 */
int is_divisible(int num, int div)
{
if (num % div == 0)
return (0);
if (div == num / 2)
return (1);
return (is_divisible(num, div + 1));
}
