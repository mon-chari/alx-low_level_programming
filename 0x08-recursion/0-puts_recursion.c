#include <stdio.h>
/**
 * _puts_recursion - Prints a string
 * @s: Pointer to char
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		putchar (*s);
		s++;
	}
	putchar ('\n');
}
