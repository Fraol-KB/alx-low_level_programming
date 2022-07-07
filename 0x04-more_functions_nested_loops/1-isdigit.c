#include "main.h"

/**
 * _isdigit - checks if it is a number.
 * @c: input number.
 * Return: 1 if it is a number , 0 if not.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
