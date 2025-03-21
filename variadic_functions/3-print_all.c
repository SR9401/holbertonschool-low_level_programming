#include "variadic_functions.h"
void print_char(va_list_args)
{
	printf("%c", va_arg(args, int));
}
void print_int(va_list_args)
{
	printf("%d", va_arg(args, int));
}

void print_float(va_list_args)
{
	printf("%f", va_arg(args, double));
}
void print_string(va_list_args)
{
	printf("%s", va_arg(args, char *));
}






/**
 * print_all - Retourne la somme de tous ses paramètres
 * format: chaine de caractere
 * 
 * Return: liste argument separer par le separateur
 */

 void print_all(const char * const format, ...)

{

	int n = 0;
	int i;
	va_list args;

	va_start(args, format);
	
	typedef struct printer
{
    char type;
    void (*func)(va_list args);
} printer_t;

printer_t printers[] = {
    {'c', print_char},
    {'i', print_int},
    {'f', print_float},
    {'s', print_string},
    {'\0', NULL}
};


		if (format == NULL)
	{
		printf("nil");
	}
		while (format[n] != '\0')
	{
			int i = 0;

			while (printers[i].type != '\0')
			{
				printers[i].func(args);
				if (i < '\0')
					{
						printf(", ");
					}
				i++;
			}
		}		
printf("\n");