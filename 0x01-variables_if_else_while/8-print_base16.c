#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 * Return:zero is succesful
 */

int main(void)
{
	int n;
	char ch;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
