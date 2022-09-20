#include "main.h"

/**
 * function: swap_int - swaps the values of two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
