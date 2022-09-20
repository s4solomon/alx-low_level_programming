#include "main.h"

/**
 * function: puts2 - prnts every other character of a string
 * followed by a new line
 * @str: string to print
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
