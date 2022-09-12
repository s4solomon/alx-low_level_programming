#include <stdio.h>
/**
 * main - prints alphabbets with the exception of 'e' and 'q' in lowercase followed by new line
 * Return:zero is succesful
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
