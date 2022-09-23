#include "main.h"

/**
 * function: string_toupper- changes all lowercase letters of a string to upper
 * @a: string to be changed
 *
 * Return: string in upper
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
	}

	return (a);
}
