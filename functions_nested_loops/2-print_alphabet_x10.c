#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - mm
 *
 *  Return: Always 0
*/

int print_alphabet_x10(void)

{
	int a = 0;

	int alpha = 'a';

	while (a < 10)
{
	alpha = 'a';
	while (alpha <= 'z')
{
	_putchar(alpha);

	alpha++;
}
	_putchar('\n');

	a++;

}
	return (0);
}
