#include <stdio.h>
#include "main.h"
/**
*_strchr - pppp
*
*@s: yyyy
*
*@c: rrr
*Return: Always 0
**/

	char *_strchr(char *s, char c)
{
	int a = 0;

		while (s[a] != c)
	{
		a++;

			if (a == '\0')
		{
			return (NULL);
		}
			else
		{

		}
	}
	return ((s + a));
}
