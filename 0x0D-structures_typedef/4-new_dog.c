#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);
/**
 * *new_dog - function that creates a new dog.
 * @name: parameter used for name.
 * @age: parameter for age of dog.
 * @owner: parameter for owner name.
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL || owner == NULL)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(sizeof(name));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = _strdup(name);
	ptr->age = age;
	ptr->owner = malloc(sizeof(owner));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->owner = _strdup(owner);
	return (ptr);
}
/**
 * *_strdup - function that returns a ptr to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: parameter used.
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	int a;
	int b;
	int c;
	char *str2;

	c = 0;
	if (str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		;
	str2 = malloc(sizeof(char) * a + 1);
	if (str2 == NULL)
		return (NULL);
	for (b = 0; str[b] != '\0'; b++)
	{
		str2[c] = str[b];
		c++;
	}
	str2[c] = '\0';
	return (str2);
}
