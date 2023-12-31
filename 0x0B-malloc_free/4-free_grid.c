#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * @grid: integer
 * @height: integer
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
