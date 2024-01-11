#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Pointer to char
 * Return: The length of a string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
