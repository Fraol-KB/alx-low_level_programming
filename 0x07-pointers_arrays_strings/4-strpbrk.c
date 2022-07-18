#include "main.h"

/**
 * _strpbrk - searches a string for chars in a substring.
 * @s: main string.
 * @accept: substring
 * Return: a pointer or null
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
