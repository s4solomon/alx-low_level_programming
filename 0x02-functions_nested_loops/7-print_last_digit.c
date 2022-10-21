#include "main.h"

/**
 * function: int print_last_digit - prints last digit of a number
 * @n: number to return last digit
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	_putchar(a + '0');
	return (a);
}
