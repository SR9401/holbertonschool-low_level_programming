#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - mldf
 * @min: 8876
 * @max: 777
 * Return:  return point
 */

int *array_range(int min, int max)
{
	int *s;
	int arr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (min <= max)
	{
		s[a] = min;
		min++;
		a++;
	}
	return (s);
}
