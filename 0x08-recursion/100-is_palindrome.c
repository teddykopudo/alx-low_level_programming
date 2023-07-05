#include "main.h"

int _is_palindrome(char *s, int start, int end);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: A pointer to the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (_is_palindrome(s, 0, len - 1));
}

/**
 * _is_palindrome - Recursive function to check if a substring is a palindrome.
 * @s: A pointer to the string.
 * @start: The starting index of the substring.
 * @end: The ending index of the substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int _is_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

			return (_is_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - Calculates the length of a string.
 * @s: A pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
			return (1 + _strlen_recursion(s + 1));
}
