#ifndef _VAR_FUNC
#define _VAR_FUNC

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_string(va_list args);
void print_float(va_list args);
void print_int(va_list args);
void print_char(va_list args);

	typedef struct p
{
	char type;
	void (*func)(va_list args);
} prin_t;

	void print_char(va_list args);
	void print_int(va_list args);
	void print_float(va_list args);
	void print_string(va_list args);
#endif
