#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - entry point
 * @name: nom chien
 * @age: age
 * @owner: prop
 * Return: s
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s;
	s = malloc(sizeof(dog_t));
	if (s == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(s);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(s);
		free(name);
		return (NULL);
	}
	s->name = name;
	s->age = age;
	s->owner = owner;
	return (s);
}