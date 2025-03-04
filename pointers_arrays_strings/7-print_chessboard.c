#include <stdio.h>
#include "main.h"
/**
*_strpbrk - pppp
*
*@s: yyyy
*
*@accept: rrr
*Return: Always 0
**/

void print_chessboard(char (*a)[8])

{
	int z = 0;

		while (z < 8)
	{
		int i = 0;
			while (i != 8)
		{
			_putchar(a[z][i]);
			i++;

				if (i == 8)
			{
				_putchar('\n');
				z++;
			}
		}
	}
}
