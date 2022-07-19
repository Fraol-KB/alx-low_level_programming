#include "main.h"

/**
 * _strstr - finds the first occurrence of a substring
 * @haystack: main string
 * @needle: substring
 * Return: pointer to the beginning of located substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp;
	int i, j, k;

	for (i = 0; *(haystack + i); i++)
	{
		temp = (haystack + i);
		k = i;
		j = 0;
		while (*(haystack + k) != '\0' && *(needle + j) != '\0')
		{
			if (*(haystack + k) != *(needle + j))
				break;
			k++;
			j++;
		}

		if (*(needle + j) == '\0')
		{
			return (temp);
		}
	}
	return (0);
}
