#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *strconcat - prints str in s
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
		return (NULL);
	}
