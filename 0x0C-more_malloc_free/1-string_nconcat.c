#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - check the code
 * @n: integer input
 * @s1: A char input pointer
 * @s2: Another char input pointer
 * Return: a pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, i;
char *ptr, *ret;

if (!s1)
s1 = "";
if (!s2)
s2 = "";

for (len1 = 0, ptr = s1; *ptr; ptr++)
len1++;
for (len2 = 0, ptr = s2; *ptr; ptr++)
len2++;
if (n > len2)
n = len2;

ret = malloc((len1 + n + 1) * sizeof(char));
if (!ret)
return (0);

ptr = ret;
while (*s1)
*ptr++ = *s1++;
i = 0;
while (i < n)
{
*ptr++ = s2[i++];
}
*ptr = 0;

return (ret);
}
