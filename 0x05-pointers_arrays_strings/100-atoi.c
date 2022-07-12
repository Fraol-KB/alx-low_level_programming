#include "main.h"

/**
 * _atoi- convert string to int.
 * @s: string to convert
 * Return: converted int.
 */
int _atoi(char *s)
{
	unsigned int i, r, neg;

	i = 0;
	r = 0;
	neg = 1;
	while (*(s + i))
	{
		if (*(s + i) == '-')
			neg *= -1;
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			r = r * 10;
			r += (*(s + i) - '0');

			if (*(s + i + 1) > '9' || *(s + i + 1) < '0')
			{
				break;
			}
		}
		i++;
	}

	r = r * neg;
	return (r);
}
