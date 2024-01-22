#include <stdio.h>
#include "dog.h"
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	strcpy(my_dog.name, "Poppy");
	my_dog.age = 3.5;
	strcpy(my_dog.owner, "Bob");
	print_dog(&my_dog);
	return (0);
}
