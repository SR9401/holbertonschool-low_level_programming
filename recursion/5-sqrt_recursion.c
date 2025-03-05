#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - oiug
 * @n: ppllp
 *
 * Return: pp
**/
int _sqrt_recursion(int n)
{

    return _sqrt(n, 0);
}
int _sqrt(int n, int a)
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
			return _sqrt(n, a + 1);
		}
	}

