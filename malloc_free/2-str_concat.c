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

	char *str_concat(char *s1, char *s2)
{

	char *s;

	if (s1 == 0)
	{
		return (NULL);
	}
	{

	s = malloc(((*s1 + *s2) + 1) * sizeof(char));
	strcpy(s, s1);
	strcpy(s, s2);
	return (s);
	}

}
