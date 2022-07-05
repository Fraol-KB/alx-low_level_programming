#include "main.h"

int print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);

}
