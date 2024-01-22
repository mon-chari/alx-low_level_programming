#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *new_dog - function that creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	
	if (p == NULL)
	{
		return (NULL);
	}

	strcpy(p->name, name);
	strcpy(p->owner, owner);

	p->age = age;

	return (p);
}
