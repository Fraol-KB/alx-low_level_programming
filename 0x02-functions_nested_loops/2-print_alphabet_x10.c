#include "main.h"

/**
 * print_alphabet_x10 - Loops 10 times and calls print_alphabet
 * Return: always 0
 *
 */
int print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
	return (0);

}

/**
 * print_alphabet - Loops and prints alphabets
 * Return: always 0
 *
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
