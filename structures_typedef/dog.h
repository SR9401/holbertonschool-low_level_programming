#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
* struct dog - idd dog
*@name: nom chien
*@age: age chien
*@owner: proprietaire
**/

struct dog
{

char  *name;
float age;
char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
