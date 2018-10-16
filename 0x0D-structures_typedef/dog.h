#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - define a new type struct dog.
 * @name: parameter for name.
 * @age: parameter for age.
 * @owner: parameter for owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
