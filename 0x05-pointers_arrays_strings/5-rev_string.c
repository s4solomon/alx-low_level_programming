#include "main.h"

/**
 * function: rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int len1, k;
	char tmp;

	while (s[len] != '\0')
		len++;

	len1 = len - 1;
	k = 0;
	while (len1 >= 0)
	{
		*(tmp + k) = (s[len1]);
		len1--;
		k++;
	}
	*s = tmp;
}
