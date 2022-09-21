#include "main.h"

/**
 * function: _strcat - concatebnate two strings
 *@dest:1st string
 * @src: 2nd string
 * Return: src if success
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
