#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: unsigned integer input
 * @c: character input
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);	
}
