#include "main.h"

/**
 * print_sign - checks is param is a Positive, Negative or Zero.
 * @c: The character to eval
 * Return: Positive(1), Zero(0), Negative(-1)
 */
int print_sign(int c)
{
	int r;

	if (c > 0)
	{
		_putchar('+');
		r = 1;
	} else if (c == 0)
	{
		_putchar('0');
		r = 0;
	} else
	{
		_putchar('-');
		r = -1;
	}

	return (r);

}
