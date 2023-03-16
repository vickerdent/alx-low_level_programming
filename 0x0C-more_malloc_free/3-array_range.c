#include "main.h"
#include <stdlib.h>

/**
 * *array_range - check the code
 * @min: integer input
 * @max: Another integer input
 * Return: a pointer or NULL
 */

int *array_range(int min, int max)
{
int *ret, *ptr;
int size = max - min + 1;

if (min > max)
return (0);
ret = malloc(size * sizeof(int));
if (ret == 0)
return (0);

ptr = ret;
while (size--)
*ptr++ = max - size;

return (ret);
}
