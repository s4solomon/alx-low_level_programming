#include "main.h"

/**
 * function: binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: binary number to convert
 *
 * Return: unsigned int or 0 if there is one more chars in the string b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int base = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		res += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}


	return (res);

}
