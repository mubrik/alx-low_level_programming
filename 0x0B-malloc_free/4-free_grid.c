#include "main.h"

/**
  * free_grid - frees a 2 dimensional grid previously created by alloc_grid
	* @grid: ptr to the ptr of array
	* @height: int height of arr
	* Return: void
	*/
void free_grid(int **grid, int height)
{
	int index_h;

	/* simple iteration */
	for (index_h = 0; index_h < height; index_h++)
	{
		free(grid[index_h]);
	}
	/* free up the arr itself */
	free(grid);
}
