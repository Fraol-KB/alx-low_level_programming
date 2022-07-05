#include "main.h"

int print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
	return (0);

}

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
