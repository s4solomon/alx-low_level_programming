#include "main.h"

/**
 * function: print_alphabet - prints 10 times the alphabet, in lowercase,
 *followed by a new line
  */

void print_alphabet(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}

}
