#include "function_pointer.h"
#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: string pointer
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
