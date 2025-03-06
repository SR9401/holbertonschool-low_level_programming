#include <stdio.h>
#include "main.h"

/**
*is_prime_number - oiug
*@n: ppllp
*
*_pn - oiugol
*
* Return: pp
**/
int is_prime_number(int n)
{

		if (n <= 1)
	{
		return (0);
	}
		else
	{
		return (_pn(n, 2));
	}
}


/**
* _pn - Verifie recursivement si un nombre est premier
*
*@n: Le nombre aÃtester
*@a: Le diviseur actuel
*
*Return: 1 si premier, 0 sinon
*/
int _pn(int n, int a)
{
		if (a * a > n)
	{
		return (1);
	}
		else if  (n % a == 0)
	{
		return (0);
	}
		else
	{
		return (_pn(n, a + 1));
	}
}
