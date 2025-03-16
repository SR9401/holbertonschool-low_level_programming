#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - cdgdt
 * @d: poin
 * Return: dd
 */
void free_dog(dog_t *s)
{
	if (s != NULL)
	{
		if (s ->name != NULL)
			free(s->name);
		if (s->owner != NULL)
			free(s->owner);
		free(s);
	}
}