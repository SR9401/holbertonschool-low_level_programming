#include <stdio.h>
#include "dog.h"

/**
 * init_dog - info dog
 *
 * @name: nom du chien
 * 
 * @owner: proprietaire
 * 
 * @age: age du chien 
 * 
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
    d->name = name;
    d->age = age
    d->owner = owner
    return (0);
}
