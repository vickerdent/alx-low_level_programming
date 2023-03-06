#include "main.h"
#include <string.h>

/**
 * print_chessboard - a function that prints the chessboard
 * @a: A char input pointer
 * Hate to have another and need to create it
 * Return: a pointer.
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
_putchar(a[i][j]);
_putchar('\n');
}
}
