#include <stdio.h>
#include "main.h"

/**
 * main - function that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
