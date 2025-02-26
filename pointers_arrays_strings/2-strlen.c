#include <stdio.h>
#include "main.h"
/**
*_strlen - pppp
*
*@s: rrr
*Return: lenght of *s
**/

	int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
{
	l++;
	s++;
}
	return (l);
}
