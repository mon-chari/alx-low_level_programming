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
	for (i = 0; i < length; i++)
	{
		length--;
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
	}
}
