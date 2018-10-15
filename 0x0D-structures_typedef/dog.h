#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - define a new type struct dog.
 * @name: parameter for name.
 * @age: parameter for age.
 * @owner: parameter for owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
