#include "main.h"

/**
 *  _strcmp- copy src to dest.
 * @s1: dest of string to be concat
 * @s2: src of string.
 * Return: difference.
 */
int _strcmp(char *s1, char *s2)
{
	int i, r;

	i = 0;
	while (*(s1 + i) - *(s2 + i) == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		i++;
	}
	r = *(s1 + i) - *(s2 + i);
	return (r);
}
