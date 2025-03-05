#include <stdio.h>
#include "main.h"

/**
*_sqrt_recursion - oiug
* @n: ppllp
*
*_rc - oiugol
*
* Return: pp
**/
int _sqrt_recursion(int n)
{

	return (_rc(n, 0));
}




int _rc(int n, int a)
{
		if (a * a == n)
	{
		return (a);
	}
		if (a * a > n)
	{
		return (-1);
	}
		else
	{
		return (_rc(n, a + 1));
	}
}

