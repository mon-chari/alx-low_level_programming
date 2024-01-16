#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: pointer to int
 * @n: number of elements of the array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int k, temp;

	for (k = 0; k < n--; k++)
	{
		temp = a[k];
		a[k] = a[n];
		a[n] = r;
	}
}

