#include "main.h"

/**
 * function: print_numbers - prints 1 to 9 followed by new line
 * Return: void
 */

void print_numbers(void);
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i);
	putchar('\n');
}
