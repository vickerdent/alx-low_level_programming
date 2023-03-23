#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - check the code
 * @n: An integer value
 * @...: other parameters
 * @separator: pointer value
 * Return: a value
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i = 0;
char *string;

va_start(ap, n);
for (; i < n; i++)
{
string = va_arg(ap, char*);
if (string == NULL)
printf("(nil)");
else
printf("%s", string);
if (separator == NULL)
continue;
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
