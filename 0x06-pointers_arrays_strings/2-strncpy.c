#include "main.h"

/**
 *  *_strncpy- copy src to dest.
 * @dest: dest of string
 * @src: src of string
 * @n: no of char to copy.
 * Return: none.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (*(src + i) && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
