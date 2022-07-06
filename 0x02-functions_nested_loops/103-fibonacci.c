#include <stdio.h>

/**
 * main - Prints Fibonacci Numbers
 * Return: Always 0.
 */
int main(void)
{
	int a;
	long int f1, f2, f3;

	f1 = 1;
	f2 = 2;
	printf("%ld", f1);
	printf(", %ld", f2);
	for (a = 0; f3 < 4000000; a++)
	{
		f3 = f1 + f2;
		printf(", %ld", f3);
		f1 = f2;
		f2 = f3;
	}
	printf("\n");
	return (0);
}
