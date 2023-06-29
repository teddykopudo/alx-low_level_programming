#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string.
 * Return: string.
 */
char *cap_string(char *s)
{
	int t;

	t = 0;
	while (s[t] != '\0')
	{
		if ((s[t - 1] == ' ' || s[t - 1] == '\n'
		|| s[t - 1] == '\t' || s[t - 1] == ','
		|| s[t - 1] == ';' || s[t - 1] == '!'
		|| s[t - 1] == '?' || s[t - 1] == '"'
		|| s[t - 1] == '(' || s[t - 1] == ')'
		|| s[t - 1] == '{' || s[t - 1] == '}'
		|| s[t - 1] == '.')
		&& (s[t] >= 'a' && s[t] <= 'z'))
		{
			s[t] = s[t] - 32;
		}
		else if ((s[0] >= 97 && s[0] <= 122))
		{
			s[0] = s[0] - 32;
		}
		else
		{
			s[t] = s[t];
		}
		t++;
	}
	return (s);
}
