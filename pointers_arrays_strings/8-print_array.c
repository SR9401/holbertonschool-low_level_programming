#include <stdio.h>
#include "main.h"
/**
*puts_half - pppp
*
*@str: rrr
*Return: Always 0
**/

	void print_array(int *a, int n)
{
	int b = 0;
		while (a[b] != '\0')
	{

		a++;
		b++;

	}
		if (b < n)
	{
		printf("%d ,", a[n]);
	}

		else
		{
			printf("%5d ,", a[n]);
		}
		putchar('\n');
}
