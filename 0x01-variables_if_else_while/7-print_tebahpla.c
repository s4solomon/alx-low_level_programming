#include <stdio.h>
/**
 * main - prints alphabbets in lowercase in reverse followed by new line
 * Return:zero is succesful
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
