#include<stdio.h>

int write(int filedes, const char *buf, unsigned int nbyte);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  /* send my_string to stdout */
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);

return (0);
}
