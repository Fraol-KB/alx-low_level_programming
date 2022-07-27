#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count
 * @av: argument vector
 * Return: pointer of an array or null
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int char_len, i, j, k;

	if (ac == 0)
		return ('\0');
	char_len = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return ('\0');

		for (j = 0; av[i][j] != '\0'; j++)
		{
			char_len++;
		}
		char_len++;
	}
	s = malloc(sizeof(char) * (char_len + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	i = 0;
	j = 0;
	for (k = 0; k < char_len; k++)
	{
		if (av[i][j] == '\0')
		{
			s[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < char_len - 1)
			s[k] = av[i][j];
		j++;
	}
	s[k] = '\0';
	return (s);
}
