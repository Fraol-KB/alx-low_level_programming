#include "main.h"

/**
 * _puts - Prints String
 * @str: string pointer
 * Return: none.
 */
void _puts(char *str)
{
	int a;

	a = 0;
	while (*(str + a))
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
