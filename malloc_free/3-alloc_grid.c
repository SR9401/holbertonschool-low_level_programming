#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - prints str in s
 * @height: fer
 *@width: rlr
 *
 * Return: Nothing.
 */

	int **alloc_grid(int width, int height)

{
	int **ptrg;
	int i = 0;
	int b = 0;
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
		ptrg = malloc(width * sizeof(int *));
	}
	if (ptrg == NULL)
	{
		free(ptrg);
		return (NULL);
	}
	while (i < width)
	{
		ptrg[i] = malloc(height * sizeof(int *));
		if (ptrg[i] == NULL)
		{
			while(b < i)
			{
				free(ptrg[b]);
				b++;
			}
		return (NULL);
		}
		else
		{
		int z = 0;
			while (z < height)
			{
			ptrg[i][z] = 0;
			z++;
			}
		}
	i++;
	}
return (ptrg);
}
