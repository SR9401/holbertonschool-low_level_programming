#include <stdio.h>
#include "main.h"
/**
*_strpbrk - pppp
*
*@s: yyyy
*
*@accept: rrr
*Return: Always 0
**/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, num;

	i = 0;
		while (s[i] != '\0')
	{
			num = 0;
			while (accept[num] != '\0' || s[i] != accept[num])
		{
			num++;
		}
		i++;
	}
		if (accept[num] == '\0')
	{
		return (NULL);
	}
		else
	{
		return ((accept + i));
	}
}

