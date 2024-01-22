#include "dog.h"
#include <string.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to the structure of type struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		strncpy(d->name, name, sizeof(d->name) - 1);
		d->name[sizeof(d->name) - 1] = '\0';

		d->age = age;

		strncpy(d->owner, owner, sizeof(d->owner) - 1);
		d->owner[sizeof(d->owner) - 1] = '\0';
	}
}
