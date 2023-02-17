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
char ch = 'a';
char cha = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (cha <= 'Z')
{
putchar(cha);
cha++;
}
putchar(c);
return (0);
}
