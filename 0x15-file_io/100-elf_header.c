#include <stdio.h>

/**
 * main - check code
 * @argc: An input
 * @argv: Another input
 * Return: information
 */
int main(int argc, char *argv[])
{
  printf("argc:%d, argv:%p\n", argc, (void *)*argv);
  return (1);
}
