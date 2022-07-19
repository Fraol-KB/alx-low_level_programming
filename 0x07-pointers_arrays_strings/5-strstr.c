#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of a substring
 * @haystack: main string
 * @needle: substring
 * Return: pointer to the beginning of located substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp;
	int i, j = 0;

	for (i = 0; *(haystack + i); i++)
	{

		if (*(needle + j) == '\0')
		{
			break;
		}

		if (j > 0)
		{
			if (*(haystack + i) == *(needle + j))
				j++;
			else
				j = 0;
		}
		if (j == 0 && *(haystack + i) == *(needle + j))
		{
			j++;
			temp = (haystack + i);
		}
	}

	if (j > 0)
		return (temp);
	return (NULL);
}
