#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: char to be printed between the strings.
 * @n: count of strings
 * Return: none.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	char *s;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(vlist, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}

	printf("\n");
	va_end(vlist);
}
