#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Retourne la somme de tous ses paramètres
 * @n: Nombre d'arguments
 * @separator: element separateur
 * Return: liste argument separer par le separateur
 */

void print_strings(const char *separator, const unsigned int n, ...)


{

	unsigned int i;
	va_list args;

	if (separator == NULL || n == 0)
	{
		printf("\n");
	}
	else
	{
	va_start(args, n);

			for (i = 0; i < n; i++)
			{
				char (*s) = va_arg(args, char*);

				if (s == NULL)
				{
					printf("nil");
				}
				else
				{
				printf("%s", s);
					if (i < (n - 1))
					{
						printf("%s", separator);
					}
					else if (i < n)
					{
						printf("\n");
					}
				}
			}
	va_end(args);
	}
}
