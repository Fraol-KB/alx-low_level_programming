#include "main.h"
/**
 * cap_string - capitalizes words
 * @s:  string.
 * Return: the pointer to s.
 */

char *cap_string(char *s)
{
	int h = 0, i;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + h) >= 'a' && *(s + h) <= 'z')
		*(s + h) = *(s + h) - 32;
	h++;
	while (*(s + h) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + h) == sep[i])
			{
				if ((*(s + (h + 1)) >= 'a') && (*(s + (h + 1)) <= 'z'))
					*(s + (h + 1)) = *(s + (h + 1)) - 32;
				break;
			}
		}
		h++;
	}
	return (s);
}
