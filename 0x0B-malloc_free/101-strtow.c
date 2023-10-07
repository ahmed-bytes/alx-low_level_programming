#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - function that frees a 2 dimensional array
* @grid: 2d array
* @height: height of the grid
* Description: In function, used pointers and memory allocation
*/

void free_grid(int **grid, int height)
{
	int counter;

	for (counter = 0; counter < height; counter++)
	{
		free(grid[counter]);
	}
	free(grid);
}
