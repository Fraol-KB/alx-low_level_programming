#include "main.h"

/**
 *  *_strcmp- copy src to dest.
 * @s1: dest of string to be concat
 * @s2: src of string.
 * Return: difference.
 */
int *_strcmp(char *s1, char *s2)
{
	int i, j, s1Cnt, s2Cnt;

	i = 0;
	s1Cnt = 0;
	s2Cnt = 0;

	while (*(s1 + i))
	{
		s1Cnt += *(s1 + i);
		i++;
	}

	j = 0;

	while (*(s2 + j))
	{
		s2Cnt += *(s2 + j);
		j++;
	}

	return (s1 - s2);
}
