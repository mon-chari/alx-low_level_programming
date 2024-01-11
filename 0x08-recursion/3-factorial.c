#include <stdio.h>
/**
 * factorial - Returns the factorial of a given number
 * @n: The number of times the given integer iterates
 * Return: The factorial of the number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	return (n * factorial(n - 1));
}
