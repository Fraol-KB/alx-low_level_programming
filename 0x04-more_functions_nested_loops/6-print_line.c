#include "main.h"

/**
 * print_line - prints a line n times.
 * @n: no of times to print _
 * Return: none.
 */
void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
