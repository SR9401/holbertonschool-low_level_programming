#include "main.h"
#include <stdio.h>
/**
*_print_rev_recursion - pppp
*
*@s: yyyy
*
*
*
**/

	void _print_rev_recursion(char *s)
{
		if (*s != '\0')
	{
		_print_rev_recursion(s + 1);

	}
		if (*s >= '\n')
	{
		_putchar(*s);
		return;
	}
}
