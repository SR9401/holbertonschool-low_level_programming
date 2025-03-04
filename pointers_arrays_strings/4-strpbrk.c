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
			while (accept[num] >= '\0' )
		{

			if (accept[num] == s[i])
			return (s + i);

			num++;
		}


		i++;

	}

	return (NULL);

}
