#include "main.h"


/**
 * is_prime_number - checks if a number is a prime number.
 * @n: number.
 * Return: 1 if true. 0 if false.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (divider_check(n, 2));
}

/**
 * divider_check - detects if an input number is a prime number.
 * @n: number.
 * @c: divider.
 * Return: 1 on success. 0 if failed.
 */
int divider_check(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (divider_check(n, c + 1));
}
