#include <stdio.h>
#include "main.h"
/**
*_memset - pppp
*
*@b: yyyy
*
*@n: iiii
*
*@s: rrr
*Return: Always 0
**/

	char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

		while (i != n)
	{
		s[i] = b;
		i++;
	}
return (s);
}
