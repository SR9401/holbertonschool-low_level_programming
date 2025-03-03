#include <stdio.h>
#include "main.h"
/**
*_memcpy - pppp
*
*@src: yyyy
*
*@n: iiii
*
*@dest: rrr
*Return: Always 0
**/

	char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

		while (i != n)
	{
		src[i] = dest[i];

		i++;
	}
return (dest);
}
