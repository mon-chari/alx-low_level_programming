#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @b: character input
 * @s: pointer to character
 * @n: integer input
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	s[a] = b;
	return (s);
}
