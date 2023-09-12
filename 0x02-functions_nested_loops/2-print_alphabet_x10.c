#include "main.h"

/**
* print_alphabet_x10 - print all alphabet in lowercase
*/

void print_alphabet_x10(void)
{
	int i;
	char letter;

	i = 0;
	while (i < 11)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	i++;
	_putchar('\n');
	}
}
