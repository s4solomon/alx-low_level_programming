#include "main.h"

/**
 * function:reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;
	int tmp;

	j = n - 1;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
		i++;
	}
}
