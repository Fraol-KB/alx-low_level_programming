#include "main.h"

/**
 * print_alphabet - Prints A to Z.
 *
 * Return: Always 0
 */
int print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);

}
