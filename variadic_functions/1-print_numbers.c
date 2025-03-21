#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Retourne la somme de tous ses paramètres
 * @n: Nombre d'arguments
 * @separator: element separateur
 * Return: liste argument separer par le separateur
 */

void print_numbers(const char *separator, const unsigned int n, ...)


{

	unsigned int i;
	va_list args;

	if (separator == NULL)
	{
		printf("\n");
	}
	else
	{
	va_start(args, n);

			for (i = 0; i < n; i++)
			{
				int num = va_arg(args, int);

				printf("%d", num);
				if (i < (n - 1))
				{
					printf("%s", separator);
				}
				else if (i < n)
				{
					printf("\n");
				}
			}

	va_end(args);
	}
}
