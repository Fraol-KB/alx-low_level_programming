#include "main.h"

/**
 * factorial - calculates factorial
 * @n: number
 * Return: factorial of input
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
