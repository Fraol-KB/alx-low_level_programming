#include "main.h"

/**
 * print_to_98 - prints from a number to 98.
 * @a: starting number
 * Return: Returns nothing.
 */
void print_to_98(int a)
{
	int n;

	if (a > 98)
	{
		for (n = a; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = a; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");

}
