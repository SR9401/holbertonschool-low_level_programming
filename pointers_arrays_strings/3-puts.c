#include <stdio.h>
#include "main.h"
/**
*_puts - pppp
*
*@str: rrr
*Return: Always 0
**/

	void _puts(char *str)
{
	while (*str != '\0')
{
	_putchar(*str);

	str++;
}
	_putchar('\n');
}
