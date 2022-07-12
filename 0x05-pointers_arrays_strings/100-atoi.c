#include "main.h"

/**
 * _atoi- convert string to int.
 * @s: string to convert
 * Return: converted int.
 */
int _atoi(char *s)
{
	int i, r;

	i = 0;
	r = 0;
	while (*(s + i))
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			r = r * 10;
			if (*(s + i - 1) == '-' && r == 0)
				r = -1 * (*(s + i) - '0');
			else if (r == 0)
				r = 1 * (*(s + i) - '0');
			else
				r += (*(s + i) - '0');

			if (*(s + i + 1) > '9' || *(s + i + 1) < '0')
			{
				break;
			}
		}
		i++;
	}

	return (r);
}
