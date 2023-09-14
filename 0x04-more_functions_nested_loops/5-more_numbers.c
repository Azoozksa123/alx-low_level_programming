#include "main.h"
/**
* more_numbers - function that print from 0 to 14 10 times
* Return: return the multiplies
*/

	void more_numbers(void)
	{
	int i = 0;
	int g = 0;

	while (g < 11)
	{

		while (i < 15)
		{
			if (i >= 10)
			_putchar ((i / 10) + '0');

			_putchar ((i % 10) + '0');
			i++;
		}
		_putchar ('\n');
		g++;
		i = 0;
	}
	}
