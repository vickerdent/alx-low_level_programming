#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int c = '0';
int na = '\n';
int an = ' ';
while (c <= '9')
{
putchar(c);
if (c == '9')
{
putchar(na);
}
if (c != '9')
{
putchar(',');
putchar(an);
}
c++;
}
return (0);
}
