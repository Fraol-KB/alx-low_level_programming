#include "main.h"

/**
 * print_numbers - prints form 0 to 9.
 * Return: none.
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
