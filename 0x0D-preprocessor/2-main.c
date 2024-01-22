#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * Return: always 0 (success)
 */

int main(void)
{
	const char *filename = __FILE__;

	while (*filename != '\0')
	{
		putchar (*filename);
		filename++;
	}
	putchar ('\n');
	return (0);
}
