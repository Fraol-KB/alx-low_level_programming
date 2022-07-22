#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the the name of the file name
 * @argc: number of arguments
 * @argv: array of argurment.
 * Return: number of args.
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);

	return (0);
}
