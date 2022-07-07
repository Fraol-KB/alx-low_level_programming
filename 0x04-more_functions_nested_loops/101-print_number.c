#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: none.
 */
void print_number(int n)
{
	unsigned int m, d;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
	
	}
	else
	{
		m = n;
	}

	d = 0;
	while (m > 0)
	{
		d *= 10;
		d += m % 10;
		m /= 10;
	}

	while (d > 0)
	{
		_putchar('0' + (d % 10));
		d /= 10;
	}
}
