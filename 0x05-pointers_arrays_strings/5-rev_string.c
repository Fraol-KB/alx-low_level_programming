#include "main.h"

/**
 * rev_string - reverse String.
 * @s: string pointer
 * Return: none.
 */
void rev_string(char *s)
{
	int a, b;
	char *str;

	a = 0;
	while (*(s + a))
	{
		a++;
	}

	str[a] = null;

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
