#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer of a string copy.
 * @str: string.
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	s = malloc(sizeof(char) * (i + 1));

	if (!s)
		return (NULL);

	for (j = 0; j <= i; j++)
		s[j] = str[j];

	return (s);
}
