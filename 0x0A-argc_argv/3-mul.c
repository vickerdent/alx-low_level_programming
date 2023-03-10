#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: counter
 * @argv: values
 * Return: Always 1 or 0
 */
int main(int argc, char **argv)
{
int num1, num2, result;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}
}
