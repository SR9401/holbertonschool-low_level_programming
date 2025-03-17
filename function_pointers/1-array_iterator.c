#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
*array_iterator - function to parkour array of function
*
*@array: array of pointer
*
*@action: pointer to the function
*
*@size: size of array
*
*Return: lenght of *s
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

	while (i != size)
	{
		action(array[i]);
		i++;
	}
}
