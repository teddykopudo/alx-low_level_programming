#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gridout;
	int t, k;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (t = 0; t < height; t++)
	{
		gridout[t] = malloc(width * sizeof(int));
		if (gridout[t] == NULL)
		{
			for (t--; t >= 0; t--)
				free(gridout[t]);
			free(gridout);
			return (NULL);
		}
	}

	for (t = 0; t < height; t++)
		for (k = 0; k < width; k++)
			gridout[t][k] = 0;

	return (gridout);
}
