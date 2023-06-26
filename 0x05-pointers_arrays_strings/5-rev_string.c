#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int count = 0, t, k;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (t = 0; t < (count - 1); t++)
	{
		for (k = t + 1; k > 0; k--)
		{
			temp = *(str + k);
			*(str + k) = *(str + (k - 1));
			*(str + (k - 1)) = temp;
		}
	}
}
