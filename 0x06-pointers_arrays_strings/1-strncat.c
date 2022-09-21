#include "main.h"

/**
 * function: _strncat - concatenate two strings
 *@dest:1st string
 * @src: 2nd string
 * @n: number of bytes to use
 * Return: src if success
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
