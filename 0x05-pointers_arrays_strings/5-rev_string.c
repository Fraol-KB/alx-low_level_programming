#include "main.h"

/**
 * rev_string - reverse String.
 * @s: string pointer
 * Return: none.
 */
void rev_string(char *s)
{
	int a, b;

	a = 0;
	while (*(str + a))
	{
		a++;
	}

	char str[a];

	a--;
	b = a;
	while (a >= 0)
	{
		*(str + a) = *(s + (b - a));
		a--;
	}

	while (a <= b)
	{
		*(s + a) = *(str + a);
		a++;
	}

}
