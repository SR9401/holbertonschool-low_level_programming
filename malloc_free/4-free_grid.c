#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *free_grid - prints str in s
 * @height: fer
 *@grid: rlr
 *
 * Return: Nothing.
 */

	void free_grid(int **grid, int height)

{
	int i = 0;

	if (grid == NULL)
	{
	return;
	}
	else
	{
		while (i < height)
		{
		free(grid[i]);
		i++;
		}
	free(grid);
	}
return;
}
