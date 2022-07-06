#include "main.h"

/**
 * times_table - Prints the hours and minutes in a day.
 * Return: does not return
 */
void times_table(void)
{
	int r, c, t;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			t = r * c;

			if (t < 10 && c > 0)
				_putchar(' ');

			if (t > 9)
				_putchar('0' + (t / 10));
			_putchar('0' + (t % 10));
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');

	}

}
