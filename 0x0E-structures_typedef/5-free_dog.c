#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: pointer to the type free_dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}