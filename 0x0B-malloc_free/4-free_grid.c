#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - Frees a 2-dimensional array of integers from memory
* @grid: A 2-dimensional array of integers
* @height: Height of grid
* Return: void
*/
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
