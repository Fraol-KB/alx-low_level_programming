#include "main.h"

/**
 *  *_strcat- copy src to dest.
 * @dest: dest of string to be concat
 * @src: src of string.
 * Return: none.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (*(dest + i))
	{
		i++;
	}

	j = 0;

	while (*(src + j))
	{
		(*((dest + i) + j)) = (*(src + j));
		j++;
	}

	*(dest + i + j) = '\0';

	return (dest);
}
