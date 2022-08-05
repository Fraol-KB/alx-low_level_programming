#include "variadic_functions.h"

/**
 * sum_them_all - add all its parameters.
 * @n: amount of the arguments.
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(vlist, int);
	}

	va_end(vlist);

	return (sum);
}
