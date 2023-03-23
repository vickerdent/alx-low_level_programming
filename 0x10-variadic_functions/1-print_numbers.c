#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - check the code
 * @n: An integer value
 * @...: other parameters
 * @separator: pointer value
 * Return: a value
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i = 0;
int nums;

va_start(ap, n);
for (; i < n; i++)
{
nums = va_arg(ap, int);
printf("%d", nums);
if (separator == NULL)
continue;
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
