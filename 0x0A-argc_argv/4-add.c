#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - prints addition of the arguments provided
 * @argc: number of arguments
 * @argv: array of argurment.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
