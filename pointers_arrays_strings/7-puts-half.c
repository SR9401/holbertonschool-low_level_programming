#include <stdio.h>
#include "main.h"
/**
*puts_half - pppp
*
*@i: rrr
*Return: Always 0
**/



	void puts_half(char *str)
{
		while (*str != '\0')
	{
		*str ++;

		int i = &str;


			if (*str % 2 == 0)
		{
				while (&str / 2 != i)
			{

				_putchar(str);
				str++;
			}
		}
	}
}
