#include "main.h"
#include <stdio.h>
/**
 * print_buffer - add 2 strings.
 * @b: string1.
 * @size: string2.
 * Return: String with all letters in ROT13 base.
 */
void print_buffer(char *b, int size)
{
	int t, k, i;

	t = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (t < size)
	{
		k = (size - t < 10) ? (size - t) : 10;
		printf("%08x: ", t);

		for (i = 0; i < 10; i++)
		{
			if (i < k)
				printf("%02x", *(b + t + i));
			else
				printf("  ");

			if (i % 2)
				printf(" ");
		}

		for (i = 0; i < k; i++)
		{
			int c = *(b + t + i);

			if (c < 32 || c > 126)
				c = '.';

			printf("%c", c);
		}

		printf("\n");
		t += 10;
	}
}

