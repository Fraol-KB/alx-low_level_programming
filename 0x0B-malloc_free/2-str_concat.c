#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concats two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j, k;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[i] != '\0')
		j++;

	s = malloc(sizeof(char) * (i + j));

	if (!s)
	{
		free(s);
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	for (k = 0; k <= j; k++)
	{
		s[k + i] = s2[k];
	}

	return (s);
}
