#include "main.h"
 #include <stdio.h>
/**
 * print_diagonal - mm
 *
 *  Return: Always 0
 *
 * @n: rrr
 *
*/


void print_diagonal(int n)

{

	int a = 0;
		if (n > 0)

	{
			while (a < n)
			{
				int b = 0;

				while (b < a)
				{
					_putchar(32);

					b++;
				}
			_putchar(92);
			_putchar('\n');
			a++;
			}

	}
		else
	{
		_putchar('\n');
	}

}
