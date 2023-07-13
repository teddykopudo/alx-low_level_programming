#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *ary;
	int t;

	if (min > max)
	return (NULL);
	ary = malloc(sizeof(*ary) * ((max - min) + 1));

	if (ary == NULL)
		return (NULL);
	for (t = 0; min <= max; t++)
{
	ary[t] = min;
	min++;
}

	return (ary);
}

