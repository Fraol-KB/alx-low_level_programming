#include "main.h"

/**
 * binary_to_uint - convert binary numbers to int
 * @b: binary.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base_ten;
	int len, base_two;

	if (!b)
		return (0);

	base_ten = 0;
	len = 0;
	while (b[len] != '\0')
		len++;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			base_ten += base_two;
		}
	}

	return (base_ten);
}
