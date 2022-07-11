#include "main.h"

/**
 * _strlen - length of char array
 * @s: string pointer
 * Return: length.
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (*(s + a))
	{
		a++;
	}
	return (a);
}
