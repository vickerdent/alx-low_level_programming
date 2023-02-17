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
char ch = '0';
char cha = 'a';
while (ch <= '9')
{
putchar(ch);
ch++;
}
while (cha <= 'f')
{
putchar(cha);
cha++;
}
putchar(c);
return (0);
}
