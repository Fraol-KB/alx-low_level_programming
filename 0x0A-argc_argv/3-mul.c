#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints multiplication of the arguments provided
 * @argc: number of arguments
 * @argv: array of argurment.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
