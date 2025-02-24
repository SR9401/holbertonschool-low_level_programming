#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *print_most_numbers - mm
 *
 *  Return: Always 0
*/

void print_most_numbers(void)
{
	int b10 = 48;

	while (b10 < 58)
{
	if (b10 == 50 || b10 == 52)

{
	b10++;

}
	_putchar(b10);

	b10++;
}

	_putchar('\n');
}
