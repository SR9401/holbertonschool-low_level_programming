
#include <stdio.h>
#include "main.h"
/**
*puts_half - pppp
*
*@str: rrr
*Return: Always 0
**/

	void puts_half(char *str)
{

int a, b, c;

	a = 0;

	b = 0;

		while (str[a] != '\0')
	{
		a++;
		b++;

		c = (b / 2);

	}

			if ((b % 2) == 0)
		{
				while (str[c] != '\0')
			{
				_putchar(str[c]);
				c++;
			}
		}
			else
		{
				while (str[c] != '\0')
			{
				_putchar(str[c]);
				c++;
			}
		}

		_putchar('\n');
}
