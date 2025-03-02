#include <stdio.h>
#include "main.h"
/**
*_strcpy - pppp
*
*@src: yyyy
*
*@dest: rrr
*Return: Always 0
**/

	char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a])
	{
		dest[a] = src[a];

		a++;
	}

	return (dest);
}
