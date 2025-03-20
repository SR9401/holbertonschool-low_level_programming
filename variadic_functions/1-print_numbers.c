#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Retourne la somme de tous ses paramètres
 * @n: Nombre d'arguments
 *
 * Return: Somme des arguments, ou 0 si n == 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)


{

const unsigned int i = 0;
	va_list args;

	if (separator == NULL || n == 0)
	{
		printf("\n");
	}
	else
	{
	va_start(args, n);

			while (i <= n)
			{
				int num = va_arg(args, int);
				printf("%d", num);
				if (i < n )
				{
					printf("%s", separator);
				}
				else
				{
					printf("\n");
				}
				i++;
			}
				
	va_end(args);
	}
}
