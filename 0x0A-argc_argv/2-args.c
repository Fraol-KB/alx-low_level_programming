#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the arguments provided
 * @argc: number of arguments
 * @argv: array of argurment.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[0]);
	printf("%s\n", argv[0]);
	return (0);
}