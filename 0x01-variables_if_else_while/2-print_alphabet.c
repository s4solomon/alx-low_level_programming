#include <stdio.h>
/**
 * main - prints alphabbets in lowercase followed bby new line
 * Return:zero is succesful
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
