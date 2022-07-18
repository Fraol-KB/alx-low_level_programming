#include "main.h"
/**
 * _strspn - returns the length of a prefix substring.
 * @s: string.
 * @accept: substring.
 * Return: the number of found bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; *(s + i); i++)
	{
		k = 1;
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k = 0;
				break;
			}
		}
		if (k)
			break;
	}
	return (i);
}
