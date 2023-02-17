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
while (c <= '9')
{
putchar(c);
if (c == '9')
{
putchar(na);
}
c++;
}
return (0);
}
