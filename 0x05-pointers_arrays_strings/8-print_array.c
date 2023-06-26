#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int t = 0;

	for (; t < n; t++)
	{
		printf("%d", *(a + t));
		if (t != (n - 1))
			printf(", ");
	}
	printf("\n");
}
