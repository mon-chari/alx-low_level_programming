#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @src: String pointer 
 * @dest: pointer to char
 * @n: integer input
 * Return: Copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
	dest[k] = src[k];
	}
	return (dest);
}
