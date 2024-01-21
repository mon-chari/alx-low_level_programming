#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: integer input
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *allocated_memory = malloc(b);

	if (allocated memory == NULL)
	{
		exit(98);
	}
	return (allocated_memory);
}
