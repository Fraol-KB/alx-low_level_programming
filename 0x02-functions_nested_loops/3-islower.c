#include "main.h"

/**
 * _islower - checks is param is lowercase.
 * @c: The character to eval
 * Return: Success(1), Failure(0)
 */
int _islower(int c)
{
	if (c > 90)
		return (1);
	else
		return (0);

}
