#include "main.h"

/**
 * _abs - returns the absoulte value of a given number.
 * @c: The character to eval
 * Return: value after operation
 */
int _abs(int c)
{
	int r;

	if (c >= 0)
		r = c;
	else
		r = -1 * c;

	return (r);

}
