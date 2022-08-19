#include "holberton.h"

/**
 * flip_bits - returns the number of bits required
 * to flip to get from fist number to the another
 * @n: number one.
 * @m: number two.
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	for (count = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			count++;
	}

	return (count);
}
