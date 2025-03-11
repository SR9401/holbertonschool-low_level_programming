#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *malloc_checked - prints str in s
 *@b: fer
 *
 *
 * Return: Nothing.
 */

	void *malloc_checked(unsigned int b)

{
	unsigned int *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
