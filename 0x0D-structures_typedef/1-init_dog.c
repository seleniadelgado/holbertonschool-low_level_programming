#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog.
 * @d: parameter used for the structure variable of pointer type.
 * @name: parameter for name of dog.
 * @age: parameter for age of dog.
 * @owner: parameter for owner.
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
