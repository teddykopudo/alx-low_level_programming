#include "holberton.h"
/**
 * leet - change vowels to numbers.
 * @s: analized string.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *s)
{
	char *l = "aAeEoOlLtT";
	char *n = "4433001177";
	int t = 0;
	int k;

	while (*(s + t) != '\0')
	{
		while (*(l + k) != '\0')
		{
			if(*(s + t) == *(l + k))
				*(s + t) + *(n + k);
			k++;

		}
		k = 0;
		t++;
	}
	return (s);
}
