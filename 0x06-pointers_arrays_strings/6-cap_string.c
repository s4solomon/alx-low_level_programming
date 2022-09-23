#include "main.h"

/**
 * function: cap_string - capitalizes all words of a string
 * @a: string to be capitalized
 *
 * Return: capitalized string
 */

char *cap_string(char *a)
{
	int i, j;
	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			for (j = 0; j < 13; j++)
			{
				if (a[i] == spe[j])
					a[i + 1] = a[i + 1] - 32;
			}
		}
	}

	return (a);
}
