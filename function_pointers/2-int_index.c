#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
*int_index - function that searches for an integer.
*
*@array: array of pointer
*
*@cmp: pointer to the function
*
*@size: size of array
*
*Return: lenght of *s
**/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
	return (-1);
	}


	while (i != size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
return (-1);
}
