#include "main.h"

/**
 * function: puts_half - prnts half of a string
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}
	if ((i % 2) == 0)
	{
		n = (i / 2);
	}
	else
	{
		n = ((i - 1) / 2);
	}
	while (j <= (n - 1))
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
