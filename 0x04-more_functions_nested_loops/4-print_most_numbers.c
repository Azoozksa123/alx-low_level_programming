#include "main.h"
/**
* print_most_numbers - function that print from 0 to 9 execept 2 and 4
* Return: return the multiplies
*/

	void print_most_numbers(void)
	{
	int i = 0;

	while (i < 10)
	{

	if (i != 2 && i != 4)
	_putchar (i + '0');

	i++;
	}
	_putchar ('\n');
	}
