#include "main.h"
#include <stdio.h>
/**
 *  more_numbers - mm
 *
 *  Return: Always 0
*/

void more_numbers(void)
{
	int a, n;


	for (a = 0; a < 10; a++)
	{
	for (n = 0; n <= 14; n++)
	{
	if (n > 9)
	{
	_putchar((n / 10) + '0');
	}
	_putchar((n % 10) + '0');
	}
	_putchar('\n');
	}
}
