#include "main.h"

/**
 * create_array - Create a char array with c value.
 * @size: size of the array
 * @c: char to init
 * Return: Always pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if (size <= 0)
		return ('\0');
	s = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';

	return (s);
}
