#include "main.h"

/**
 * reverse_array - function that reverses array integers content
 * @a: pointer of array integer
 * @n: number of swap elements
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int t;
	int k;
	for (t = 0; t < n--; t++)
	{
		k = a[t];
		a[t] = a[n];
		a[n] = k;
	}
}
