#include "main.h"

/**
 * function: print_diagonal - draws diagonal line on terminal
 * @n: number of times the character \ should  be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
			}
			else if (j < i)
				_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
