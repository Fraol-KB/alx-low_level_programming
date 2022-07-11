#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints second half of a String.
 * @a: array pointer
 * @n: number of elements.
 * Return: none.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (*(a + i) && i < n)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(", ");
		i++;
	}

	printf("\n");
}
