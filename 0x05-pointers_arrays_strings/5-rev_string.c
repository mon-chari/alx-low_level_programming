#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: pointer to character
 */

void rev_string(char *s)
{
	int i, length = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i <= 0; i++)
	{
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
	}
}
