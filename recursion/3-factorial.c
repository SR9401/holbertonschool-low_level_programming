#include <stdio.h>
#include "main.h"
/**
*factorial - pppp
*
*@n: yyyy
*
*Return: factorial of n.
*
**/






	int factorial(int n)


{
		if (n == 0)
	{
		return (1);
	}

		else if (n < 0)
	{
		return (-1);
	}
		else
	{
		return (n * factorial(n - 1));
		factorial(n - 1);
	}
}
