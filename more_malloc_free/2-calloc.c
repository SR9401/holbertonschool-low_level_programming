#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - fun pour alloer memoire
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: 898
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	b = 0;
	while (b < nmemb * size)
	{
		ptr[b] = 0;
		b++;
	}
	return (ptr);
}
