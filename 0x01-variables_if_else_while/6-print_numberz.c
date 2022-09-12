#include <stdio.h>
/**
 * main - prints numbers 0 to 9 followed by new line usint putchar
 * Return:zero is succesful
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
