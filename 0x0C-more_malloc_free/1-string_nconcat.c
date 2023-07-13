#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 *
 * Return: pointer to newly allocated space in memory
 * if fails,NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tout;
	unsigned int tk1, tk2, tkout, i;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (tk1 = 0; s1[tk1] != '\0'; tk1++)
		;

	for (tk2 = 0; s2[tk2] != '\0'; tk2++)
		;

	if (n > tk2)
	n = tk2;

	tkout = tk1 + n;
	tout = malloc(tkout + 1);
	if (tout == NULL)
	return (NULL);

	for (i = 0; i < tkout; i++)
{
	if (i < tk1)
	tout[i] = s1[i];
	else
	tout[i] = s2[i - tk1];
}

	tout[i] = '\0';

	return (tout);
}
