#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - mm
 *
 *  Return: Always 0
*/

int print_alphabet(void)

{
	int alpha = 'a';

	while (alpha != 'z')
{
	_putchar(alpha);
	alpha++;

}
_putchar('\n');
return (0);
}
