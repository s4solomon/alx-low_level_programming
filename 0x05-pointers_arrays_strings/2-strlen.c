#include "main.h"

/**
 * function: _strlen - returns the length of string
 * @s: string to evaluate
 * Return: the length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
