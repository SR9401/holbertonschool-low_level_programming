#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - prints buffer in hexa
 * @c: hfvg
 * @size: nhiuh
 *
 * Return: Nothing.
 */

	char *create_array(unsigned int size, char c)

{

	char *s;
	unsigned int i = 0;

	s = malloc((size + 1) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
