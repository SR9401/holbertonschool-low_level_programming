#include <stdio.h>
#include "main.h"
/**
*_strcat - pppp
*
*@src: yyy
*
*@dest: rrr
*Return: Always 0
**/

	char *_strcat(char *dest, char *src)
{
		while (*src < '\0')
	{

		src++;
	}

		while (*dest <= '\0')
	{

		dest++;
	}
	return (dest);
}

