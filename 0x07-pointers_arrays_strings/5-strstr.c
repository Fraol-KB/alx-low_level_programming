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
	int i, j = 0;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (j == 0 && *(haystack + i) == *(needle + j))
		{
			temp = *(haystack + i);
		}

		if (j >= 0 && *(haystack + i) == *(needle + j))
		{
			j++;
		}
		else
		{
			if (*(needle + j) == '\0')
			{
				break;
			}
			j = 0;
			temp = NULL;
		}
	}
	if (!*temp)
		return (temp);
	return (0);
}
