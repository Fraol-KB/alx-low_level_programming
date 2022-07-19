#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals of matrics
 * @a: pointer
 * @size: size
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int i, diag1, diag2, fullSize;

	diag1 = 0;
	diag2 = 0;
	fullSize = size * size;
	for (i = 0; i < fullSize; i++)
	{
		if (i % (size + 1) == 0)
		{
			diag1 += *(a + i);
		}

		if ((i > 0 && i < fullSize - 1) && i % (size - 1) == 0)
		{
			diag2 += *(a + i);
		}
	}
	printf("%d, %d\n", diag1, diag2);
}
