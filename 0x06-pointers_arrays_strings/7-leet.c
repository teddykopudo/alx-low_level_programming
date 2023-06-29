#include "holberton.h"
/**
 * leet - change vowels to numbers.
 * @s: analized string.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int t = 0;
	int k;

	while (*(s + t) != '\0')
	{
		for (k = 0; k <= 9; k++)
		{
			if (*(s + t) == a[k])
			{
				*(s + t) = n[k];
			}
		}
		t++;
	}
	return (s);
}
