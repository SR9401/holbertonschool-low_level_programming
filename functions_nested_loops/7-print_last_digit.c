#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *print_last_digit - mm
 *@n:  mmm
 *  Return: Always 0
*/

int print_last_digit(int n)
{
	_putchar('0' + abs(n % 10));

	return (abs(n % 10));
}
