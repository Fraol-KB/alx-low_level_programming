#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string.
 * Return: 1 if true, 0 if false.
 */
int is_palindrome(char *s)
{
	int strlen;

	if (*s == '\0')
		return (1);

	strlen = _strlen_recursion(s);
	strlen--;
	return (palindrome_recursion(s, 0, strlen));
}

/**
 * _strlen_recursion - calculates length of a string
 * @s: pointer
 * Return: none.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_recursion - cecks if string is a palindrome.
 * @s: string
 * @left_end: smallest iterator.
 * @right_end: biggest iterator.
 * Return: 1 on success, 0 on fail
 */
int palindrome_recursion(char *s, int left_end, int right_end)
{
	if (*(s + left_end) == *(s + right_end))
	{
		if (left_end == right_end)
			return (1);
		left_end++;
		right_end--;
		return (palindrome_recursion(s, left_end, right_end));
	}
	return (0);
}
