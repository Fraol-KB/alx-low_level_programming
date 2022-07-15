#include "main.h"
/**
 * leet - encodes into 1337
 * @s: string.
 * Return: the pointer to s.
 */

char *leet(char *s)
{
	int num[] = {'4', '3', '0', '7', '1'};
	int low[] = {'a', 'e', 'o', 't', 'l'};
	int upper[] = {'A', 'E', 'O', 'T', 'L'};
	int i;

	j = 0;
	while (*(s + j) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + j) == low[i] || *(s + j) == upper[i])
			{
				*(s + j) = num[i];
				break;
			}
		}
		j++;
	}

	return (s);
}
