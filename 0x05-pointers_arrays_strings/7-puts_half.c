#include "main.h"

/**
 * function: puts_half - prnts half of a string
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i, j = 0;
	int half;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		half = i / 2;
	else
		half = (i - 1) / 2;
	while (j <= half - 1)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
