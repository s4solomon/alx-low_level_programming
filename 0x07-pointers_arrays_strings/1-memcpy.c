#include "main.h"

/**
 * function: _memcpy - copies memory area
 * @dest: destination to be filled
 * @src: source to copy
 * @n: number of spaces to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

		*(dest + i) = src;

	return (dest);
}
