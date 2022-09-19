#include <stdio.h>
#include "main.h"

/**
 * function: _isupper - checks for uppercase character
 * @c: character to e checked
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
