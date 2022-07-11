#include "main.h"

/**
 * _puts2 - Prints String
 * @str: string pointer
 * Return: none.
 */
void _puts2(char *str)
{
	int a;

	a = 0;
	while (*(str + a))
	{
		if (a % 2 == 0)
			_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
