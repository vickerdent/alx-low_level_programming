#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - check the code
 * @b: integer input
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
void *a;

a = malloc(b);
if (!a)
exit(98);
return (a);
}
