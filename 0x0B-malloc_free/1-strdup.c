#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int t, k;

	if (str == NULL)
		return (NULL);

	for (t = 0; str[t] != '\0'; t++)
		;

	dup = (char *)malloc(sizeof(char) * (t + 1));

	if (dup == NULL)
		return (NULL);

	for (k = 0; k <= t; k++)
		dup[k] = str[k];

	return (dup);
}
