#include "main.h"
/**
 * _puts_recursion - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * Return: changed array with new value for n bytes
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(*s + 1);
	}

	else
	_putchar('\n');

}
