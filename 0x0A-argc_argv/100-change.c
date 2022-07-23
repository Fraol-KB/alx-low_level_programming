#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints number of coins in changes
 * @argc: number of arguments
 * @argv: array of argurment.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int cents, ncoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	ncoins += cents / 25;
	cents %= 25;
	ncoins += cents / 10;
	cents %= 10;
	ncoins += cents / 5;
	cents %= 5;
	ncoins += cents / 2;
	cents %= 2;
	ncoins += cents / 1;

	printf("%d\n", ncoins);
	return (0);
}
