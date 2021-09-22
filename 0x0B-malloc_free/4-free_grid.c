#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d grid previously created by your alloc_grid function
 * @grid: multidimensional array of ints
 * @height: height of the grid
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

