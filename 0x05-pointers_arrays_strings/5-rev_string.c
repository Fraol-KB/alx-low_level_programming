#include "main.h"

/**
 * rev_string - reverse String.
 * @s: string pointer
 * Return: none.
 */
void rev_string(char *s)
{
	int a, b;
	char *str, swap;

	a = 0;
	while (*(s + a))
	{
		a++;
	}

	str = s;

	a--;
	b = a;

	a = 0;
	while (a <= (b / 2))
	{
		swap = *(s + a);
		*(s + a) = *(str + (b - a));
		*(s + (b - a)) = swap;
		a++;
	}

}
