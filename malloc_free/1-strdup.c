#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - prints str in s
 * @str: fer
 *
 *
 * Return: Nothing.
 */

	char *_strdup(char *str)

{

	char *s;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i == 0)
	{
		return (NULL);
	}
	{

	s = malloc((i + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
	i = 0;
	}
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
	}

}
