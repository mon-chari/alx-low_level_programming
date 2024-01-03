#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to an integer int
 * @b: Pointer to an integer int
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
