#include <stdio.h>
/**
 * _puts_recursion - Prints a string
 * @s: Pointer to char
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar (*s);
		_puts_recursion(s + 1);
	}
	putchar ('\n');
}
