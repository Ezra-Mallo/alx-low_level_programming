#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid with memory leaks.
 * @grid: First parameter is for the number of columns
 * @height: Second parameter is for the number of rows
 */
void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
		free(grid[r]);
	free(grid);
}
