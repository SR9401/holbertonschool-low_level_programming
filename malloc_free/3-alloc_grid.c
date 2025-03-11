#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - prints str in s
 * @height: fer
 *@width: rlr
 * Return: Nothing.
 */

	int **alloc_grid(int width, int height)
{
	int **ptrg;
	int i = 0;
	int b, z;

	if (width <= 0)
	{
		return (NULL);
	}
	else if (height <= 0)
	{
		return (NULL);
	}
	else
	{
		ptrg = malloc(height * sizeof(int *));
	}
	if (ptrg == NULL)
	{
		free(ptrg);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptrg[i] = malloc(width * sizeof(int *));
		if (ptrg[i] == NULL)
		{
			for (b = 0; b < i; b++)
			{
				free(ptrg[b]);
			}
		return (NULL);
		}
			for (z = 0; z < width; z++)
			{
			ptrg[i][z] = 0;
			}
	}
return (ptrg);
}
