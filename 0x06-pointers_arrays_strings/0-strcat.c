#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int t;
	int k;

	t = 0;
	while (dest[t] != '\0')
	{
		dest[t] = src[k];
		t++;
		k++;
	}

	dest[t] = '\0';
	return (dest);
}
