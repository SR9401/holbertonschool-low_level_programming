#include "main.h"

/**
* print_square - function to print a square
*
*@size: parametre pour l du carre
*
*/
void print_square(int size)
{



	int a = 0;
		if (size > 0)

	{
			while (a < size)
			{
				int b = 0;

				while (b < size)
				{
					_putchar('#');

					b++;
				}
			_putchar('\n');
			a++;
			}

	}
		else
	{
		_putchar('\n');
	}

}
