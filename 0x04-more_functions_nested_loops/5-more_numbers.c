#include "main.h"

/**
 * function: more_numbers - prints 10 times numbers 1 to 14 followed by new line
 * Return: void
 */

void more_numbers(void);
{
	int i,k;

	for (i = 0; i < 10; i++)
		for (k = 0; k <= 14; k++)
			putchar(k);
	putchar('\n');
}
