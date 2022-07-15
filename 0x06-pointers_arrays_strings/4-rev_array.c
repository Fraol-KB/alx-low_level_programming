#include "main.h"
/**
 * reverse_array - reverses array
 * @a: given array.
 * @n: number of elements of the array.
 * Return: no return.
 */
void reverse_array(int *a, int n)
{
	int i, j, swap;

	i = 0;
	while (i < (n - 1))
	{
		j = i + 1;
		while (j > 0)
		{
			swap = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = swap;
			j--;
		}
		i++;
	}
}
