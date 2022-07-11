#include "main.h"

/**
 * print_rev - Prints String in reverse.
 * @str: string pointer
 * Return: none.
 */
void print_rev(char *str)
{
	int a;

	a = 0;
	while (*(str + a))
	{
		a++;
	}
	a--;
	while (a >= 0)
	{
		_putchar(*(str + a));
		a--;
	}
	_putchar('\n');
}
