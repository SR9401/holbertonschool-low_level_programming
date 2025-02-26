#include <stdio.h>
#include "main.h"
/**
*swap_int - pppp
*
*@a: rrr
*
*@b: fff
*
*
*Return: Always 0
**/

	void swap_int(int *a, int *b)
{
	int c = 0;

	c = *b;

	*b = *a;

	*a = c;
}
