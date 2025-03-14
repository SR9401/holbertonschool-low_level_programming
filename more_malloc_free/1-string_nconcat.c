#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - prints str in s
 * @s1: fer
 *@s2: rlr
 *@n: pplpl
 * Return: Nothing.
 */

	char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *s;
	unsigned int i, z;

	for (i = 0; s1[i] < '\0'; i++)
	for (z = 0; s2[z] < '\0'; z++)
	if (i == 0)
	{
		s1 = "";
	}
	if (z == 0)
	{
		s2 = "";
	}
	s = malloc(((i + n) + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	if (n >= z)
	{
		for (z = 0; s2[z] != '\0'; z++)
		{
			s[i] = s2[z];
			i++;
		}
	}
	else
	{
		for (z = 0; z != n; z++)
		{
			s[i] = s2[z];
			i++;
		}
		s[i] = '\0';
	}
	return (s);
	free(s);
}
