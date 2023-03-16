#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - check the code
 * @nmemb: integer input
 * @size: Another integer input
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ret;
char *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (0);

ret = malloc(nmemb * size);
if (ret == 0)
return (0);

for (i = nmemb * size, ptr = ret; i; i--)
*ptr++ = 0;
return (ret);
}
