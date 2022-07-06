#include "main.h"

/**
 * print_last_digit - Prints the last digit of given number.
 * @c: The character to eval
 * Return: Returns the last digit of the given numer
 */
int print_last_digit(int c)
{
	int r;

	r = c % 10; 
	if(c < 0)
		r = -1 * r;

	_putchar('0' + r);
	return (r);

}
