#include "main.h"

/**
 * function: print_rev - prnts a string in reverse followed y new line
 * @s: string to print
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;
	
	j = i - 1;

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
