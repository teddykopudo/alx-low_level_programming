#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @s: string to code
 * Return: the encoded string.
 */
char *leet(char *s)
{
	int t;
	int j;
	int k;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	t = 0;
	while (s[t] != '\0')
	{
		j = 0;
		k = 0;
		while (l[j] != '\0')
		{
			if (s[t] == l[j])
			{
				k = j;
				s[t] = e[k];
			}
			j++;
		}
		t++;
	}
	return (s);
}
