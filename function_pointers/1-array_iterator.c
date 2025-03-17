#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
*print_name - function to print a name
*
*@name: pointers name
*
*@f:pointer to called function of main
*
*Return: lenght of *s
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
