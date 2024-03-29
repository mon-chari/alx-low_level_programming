#include <stdio.h>

/**
 * _pow_recursion - Returns the value of x traised to the power of y
 * @x: Input
 * @y: Power
 * Return: Value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
