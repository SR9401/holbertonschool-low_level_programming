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

	unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int num = 0;
	while (s[i] != accept[num])
	{
			while (s[i] == accept[num])
		{
			num++;
		}


		i++;
	}
	return(i);
}
