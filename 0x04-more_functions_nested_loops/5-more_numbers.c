#include "main.h"

/**
 * function: more_numbers - prints 10 times numbers 1 to 14
 * followed by new line
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar(j % 10 + '0');
		}
			_putchar('\n');
	}

}
