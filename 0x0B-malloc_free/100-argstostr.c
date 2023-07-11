#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int c, t, k, ij;

	if (ac == 0)
		return (NULL);

	for (c = t = 0; t < ac; t++)
	{
		if (av[t] == NULL)
			return (NULL);

		for (k = 0; av[t][k] != '\0'; k++)
			c++;
		c++;
	}

	aout = malloc((c + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (t = k = ij = 0; ij < c; k++, ij++)
	{
		if (av[t][k] == '\0')
		{
			aout[ij] = '\n';
			t++;
			ij++;
			k = 0;
		}
		if (ij < c - 1)
			aout[ij] = av[t][k];
	}
	aout[ij] = '\0';

	return (aout);
}
