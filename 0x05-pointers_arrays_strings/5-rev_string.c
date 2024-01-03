#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: pointer to character
 */
void rev_string(char *s)
{
	int length = 10;
	int start = 0;
	int end = length - 1;
	char temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
