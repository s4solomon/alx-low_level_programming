#include "main.h"

/**
 * function: _memset - fills memory with constant bytes
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of spaces to fill
 *
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

		*(s + i) = b;

	return (s);
}
