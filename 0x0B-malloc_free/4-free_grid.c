#include "main.h"
#include <stdlib.h>

/**
 * free_grid - check the code
 * @grid: integer input pointer
 * @height: integer input
 * Return: returns nothing
 */

void free_grid(int **grid, int height)
{
int i = 0;

if (grid == NULL)
return;
while (i < height)
free((int *)grid[i++]);
free(grid);
}
