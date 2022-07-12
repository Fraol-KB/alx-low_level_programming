#include "main.h"

/**
 * puts_half - Prints second half of a String.
 * @str: string pointer
 * Return: none.
 */
void puts_half(char *str)
{
	int a, b;

	a = 0;
	while (*(str + a))
	{
		a++;
	}
	
	if (a % 2 == 0)
		b = a / 2;
	else
		b = (a + 1) / 2;

	while (b < a)
	{
		_putchar(*(str + b));
		b++;
	}
	_putchar('\n');
}
