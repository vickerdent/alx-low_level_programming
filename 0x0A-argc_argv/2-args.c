#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @argc: counter
 * @argv: values
 * Return: Always 1 or 0
 */
int main(int argc, char **argv)
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
