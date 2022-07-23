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
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
