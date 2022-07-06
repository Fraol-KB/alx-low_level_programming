#include "main.h"

/**
 * _isalpha - checks is param is a letter.
 * @c: The character to eval
 * Return: Success(1), Failure(0)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);

}
