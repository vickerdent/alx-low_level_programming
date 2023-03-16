#include "main.h"
#include <stdlib.h>

/**
 * _prntstr - prints a string
 * @s: char input
 */
void _prntstr(char *s)
{
while (*s)
_putchar(*s++);
}

/**
 * numstrchk - checks arg array to see if a string is numeric
 * @s: char input
 * Return: integer
 */
long int numstrchk(char *s)
{
long int len = 0;

if (*s == 0)
{
_prntstr("Error\n");
exit(98);
}
while (*s)
{
if (*s < '0' || *s > '9')
{
_prntstr("Error\n");
exit(98);
}
*s -= '0';
len++;
s++;
}
return (len);
}

/**
 * _calloc_buffer - allocate a block of memory of size * num
 * @num: integer input
 * @size: integer input
 * Return: pointer or NULL
 */
void *_calloc_buffer(long int num, long int size)
{
void *ret;
char *ptr;

ret = malloc(num * size);
if (ret == 0)
{
exit(98);
}

size = size * num;
ptr = ret;
ptr[--size] = 0;
while (size--)
ptr[size] = '0';

return (ret);
}

/**
 * trimzero - moves pointer position to after last leading 0 in string
 * @s: char input pointer
 * Return: variable
 */
char *trimzero(char *s)
{
while (*s == '0')
if (*(s + 1) != 0)
s++;
else
break;
return (s);
}

/**
 * main - check the code
 * @ac: An integer input pointer
 * @av: A char input pointer
 * Return: nothing
 */

int main(int ac, char **av)
{
long int len1, len2, lenres, i, j;
char *res;

if (ac != 3)
{
_prntstr("Error\n");
return (98);
}
av[2] = trimzero(av[2]);
av[1] = trimzero(av[1]);
if (*av[1] == '0' || *av[2] == '0')
{
_prntstr("0\n");
return (0);
}
len1 = numstrchk(av[1]);
len2 = numstrchk(av[2]);
lenres = len1 + len2;
res = _calloc_buffer(lenres + 1, sizeof(char));

for (i = lenres - 1, len1--; len1 >= 0; len1--, i += len2 - 1)
for (j = len2 - 1; j >= 0; j--, i--)
{
res[i] = (av[1][len1] * av[2][j] % 10) + res[i];
res[i - 1] = (av[1][len1] * av[2][j] / 10) + res[i - 1];
if (res[i] > '9')
{
res[i] -= 10;
res[i - 1]++;
}
}

if (*res == '0')
_prntstr(res + 1);
else
_prntstr(res);
_putchar('\n');
free(res);

return (0);
}
