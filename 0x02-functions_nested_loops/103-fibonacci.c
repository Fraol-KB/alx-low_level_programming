#include <stdio.h>

/**
 * main - Prints Fibonacci Numbers
 * Return: Always 0.
 */
int main(void)
{
	
	long int f1, f2, f3, fe;

	fe = 0;
	f1 = 1;
	f2 = 2;
	while (f3 < 4000000)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		if ((f1 % 2) == 0)
			fe += f1;
	}

	printf("%ld\n", fe);
	return (0);
}
