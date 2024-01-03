#include <stdio.h>

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s: pointer to char
 */
void print_rev(char *s)
{
	int i, length = 0;
	while (s[length] != '\0')
	{
		for (i = length - 1; i >= 0; i--)
		{
			putchar(s[i]);
		}
		length++;
	}
	putchar('\n');
}
