#include "variadic_functions.h"

/**
 * print_char - printfs a char from var args
 *
 * @args: va_list to print from
 *
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", (char) va_arg(args, int));
}
/**
 * print_int - printfs a int from var args
 *
 * @args: va_list to print from
 *
 * Return: void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - printfs a char from var args
 *
 * @args: va_list to print from
 *
 * Return: void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - printfs a char from var args
 *
 * @args: va_list to print from
 *
 * Return: void
 */
void print_string(va_list args)
{
	printf("%s", va_arg(args, char *));
}






/**
 * print_all - Retourne la somme de tous ses paramètres
 *@format: chaine de caractere
 *
 * Return: liste argument separer par le separateur
 */

void print_all(const char * const format, ...)

{
	va_list args;

prin_t p[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	{'\0', NULL}
};

	int i = 0;
	int n = 0;

	va_start(args, format);
	if (format == NULL)
	{
		printf("\n");
	}

	while (format[n] != '\0')
	{
		while (p[i].type != '\0')
		{
			p[i].func(args);
			i++;
			printf(", ");
		}
		n++;
	}
printf("\n");
va_end(args);
}
