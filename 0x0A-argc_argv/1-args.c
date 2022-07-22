#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments given
 * @argc: number of arguments
 * @argv: array of argurment.
 * Return: number of args.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", --argc);
	return (0);
}
