#include "main.h"

/**
 * function: rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char *p = s;

	while (s[i] != '\0')
		i++;

	while (i >= 0)
	{
/*		j = 0 */
		*(p + 'j') = (s[i]);
		i--;
		j++;
	}
	*s = *p;
}
