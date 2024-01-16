#include <stdio.h>

/**
 * puts2 - Prints every other character of a string followed by a new line
 * @str: Pointer to char
 */
void puts2(char *str)
{
	int i, length = 0;

	while (*str != '\0')
	{
		str++;
		length++;
	}
	for (i = 0; i <= length - 1; i++)
	{
		if (i / 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
