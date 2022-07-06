#include <stdio.h>

/**
 * main - Prints natural numbers
 * Return: Always 0.
 */
int main(void)
{
	int n, sum;

	for (n = 1; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}

	printf("%d\n", sum);
	return (0);
}
