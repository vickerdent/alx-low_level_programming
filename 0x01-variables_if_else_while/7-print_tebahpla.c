#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int c = '\n';
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
--ch;
}
putchar(c);
return (0);
}
