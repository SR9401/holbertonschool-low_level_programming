#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
*print_name - function to print a name
*
*@name: pointers name
*
*@*f:
*
*Return: lenght of *s
**/
void print_name(char *name, void (*f)(char *))
{
	f(name);

}
