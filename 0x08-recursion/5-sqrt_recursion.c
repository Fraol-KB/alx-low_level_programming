#include "main.h"

/**
 * sqrt_finder -finds the square that results n.
 * @n: number.
 * @c: potential square root of n.
 * Return: square root or -1.
 */
int sqrt_finder(int n, int c)
{
	if (n / c == c)
	{
		return (c);
	}
	if ((n / c) < c)
	{
		return (-1);
	}
	return (sqrt_finder(n, c + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqrt_finder(n, 2));
}