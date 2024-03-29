#include <stdlib.h>

/**
 * free_grid - free a 2 dimension grid.
 *
 * @grid: 2 dimension array to be freed.
 *
 * @height: height of the grid.
 */

void free_grid(int **grid, int height)
{
int k = 0;
for (; k < height; k++)
	free(grid[k]);
free(grid);
}
