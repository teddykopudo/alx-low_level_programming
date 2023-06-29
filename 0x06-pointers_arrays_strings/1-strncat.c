#include "main.h"

/**
 * _strncat - concatenate two strings using n bytes from src
 * @dest: input
 * @src: input
 * @n: input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int t;
	int k;

	t = 0;
	while (dest[t] != '\0')
	{
		t++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[t] = src[k];
		t++;
		k++;
	}
	dest[t] = '\0';
	return (dest);
}
