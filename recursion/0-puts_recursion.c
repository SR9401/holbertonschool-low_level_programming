#include <stdio.h>
#include "main.h"
#include <stdio.h>
#include "main.h"
/**
*_puts_recursion - pppp
*
*@s: yyyy
*
*
*
**/






	void _puts_recursion(char *s)
{
		if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

		else
		_putchar(*s);
		_puts_recursion(s + 1);
}
