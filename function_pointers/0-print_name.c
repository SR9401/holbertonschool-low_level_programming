
#include <stdio.h>
#include "main.h"
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
	f = print_name_as_is;
	f(name);

}