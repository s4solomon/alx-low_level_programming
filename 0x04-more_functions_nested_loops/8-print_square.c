#include "main.h"

/**
 * function: print_square -prints square followed by a new line
 * @size: number of times the character \ should  be printed
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	else
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
		_putchar('\n');
}
