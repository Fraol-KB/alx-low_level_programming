#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create a char array with c value.
 * @size: size of the array
 * @c: char to init
 * Return: Always pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size <= 0)
		return ('\0');
	s = malloc(sizeof(char) * size);
	if (!s)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';

	return (s);
}
