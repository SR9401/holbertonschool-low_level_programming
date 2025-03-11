#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - prints str in s
 * @s1: fer
 *@s2: rlr
 *
 * Return: Nothing.
 */

	char *str_concat(char *s1, char *s2)

{
	char *s;
	int i = 0;
	int z = 0;

	while (s1[i] != '\0')

	{
		i++;
	}

	if (i == 0)
	{
		s1 = "";
	}
	while (s2[z] != '\0')
	{
		z++;
	}
	if (z == 0)
	{
		s2 = "";
	}
	s = malloc(((i + z) + 1) * sizeof(char));
	if (s == NULL)
	{
	free(s);
	return(NULL);
	}
	else
	{
	i = 0;
	z = 0;
	}
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[z] != '\0')
	{
		s[i] = s2[z];
		i++;
		z++;
	}
	return (s);
}
