#include "function_pointers.h"
#include <stdlib.h>
/**
*print_name - function to print a name
*
*@name: pointers name
*
*@f: pointer to called function of main
*
*Return: nothing
**/
void print_name(char *name, void (*f)(char *))
{
	if (*f != NULL && name != NULL)
	{
		f(name);
	}
}

