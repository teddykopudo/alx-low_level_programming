#include "main.h"

/**
 * is_palindrome - checks if the input string for a palindrome
 * @s: a pointer that points to the string
 *
 * Return: 1 if the string is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int i;

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
			return (0);
	}
	return (1);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: the pointer that points to the string
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
