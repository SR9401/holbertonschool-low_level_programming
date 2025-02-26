#include <stdio.h>
#include "main.h"
/**
*print_rev - pppp
*
*@s: rrr
*Return: Always 0
**/



	void print_rev(char *s)


{
	char *a = s;

		while (*s != '\0')
	{
		s++;
	}

		while (a < s)
	{

		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
