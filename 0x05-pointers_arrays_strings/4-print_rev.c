#include "main.h"

/**
 * function: print_rev - prnts a string in reverse followed y new line
 * @s: string to print
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
