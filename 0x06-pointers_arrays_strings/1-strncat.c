#include "main.h"

/**
 *  *_strncat- copy src to dest.
 * @dest: dest of string to be concat
 * @src: src of string.
 * @n: no of char to copy.
 * Return: none.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (*(dest + i))
	{
		i++;
	}

	j = 0;

	while (*(src + j) && j < n)
	{
		(*((dest + i) + j)) = (*(src + j));
		j++;
	}

	*(dest + i + j) = '\0';

	return (dest);
}
