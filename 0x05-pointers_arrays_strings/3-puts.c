#include "main.h"

/**
 * function: _puts - prnts a string t standard output
 * @str: string to print
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
