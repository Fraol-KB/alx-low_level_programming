#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: char to be printed between numbers
 * @n: count of integers
 * Return: none.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;

	va_start(vlist, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(vlist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}

	printf("\n");
	va_end(vlist);
}
