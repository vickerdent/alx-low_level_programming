#include<stdio.h>

int write(int filedes, const char *buf, unsigned int nbyte);

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
  /* send my_string to stdout */
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

return (1);
}
