#include "main.h"

/**
 *  *_strcpy- copy src to dest.
 * @dest: dest of string
 * @src: src of string
 * Return: none.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
