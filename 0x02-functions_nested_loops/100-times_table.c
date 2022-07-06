#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: number times table
 * Return: no return
 */
void print_times_table(int n)
{
	int a, b, m;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				m = a * b;
				_putchar(',');
				_putchar(' ');
				if (m < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + m);
				}
				else if (m < 100)
				{
					_putchar(' ');
					_putchar('0' + (m / 10));
					_putchar('0' + (m % 10));
				}
				else
				{
					_putchar('0' + ((m / 10) / 10));
					_putchar('0' + ((m / 10) % 10));
					_putchar('0' + (m % 10));
				}
			}
			_putchar('\n');
		}
	}
}
