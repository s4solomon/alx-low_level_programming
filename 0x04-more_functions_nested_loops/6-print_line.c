#include "main.h"

/**
 * function: print_line -draws a straight line in terminal
 * @n: number of times
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
