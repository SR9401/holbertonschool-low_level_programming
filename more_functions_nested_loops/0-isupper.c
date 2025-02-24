#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *_isupper - mm
 *@c:  mmm
 *  Return: Always 0
*/

int _isupper(int c)
{

	if (c <= 'Z' && c >= 'A')
{
	return (1);
}
	else
{
	return (0);
}
}
