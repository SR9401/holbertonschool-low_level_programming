#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

	char *_strdup(char *str)

{

	char *s;

	s = malloc((*str + 1) * sizeof(char));
	if (str == 0)
	{
		return (NULL);
	}
	{

	s = malloc((*str + 1) * sizeof(char));
	strcpy(s, str);
	return (s);
	}

}
