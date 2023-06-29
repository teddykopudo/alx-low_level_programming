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
	int t = 0;
	int k = 0;
	int *initial, *final;
	int num = 0;

	initial = a;
	final = a;
	n -= 1;
	while (t < n)
		t += 1;
	while (k <= t)
	{
		num = *(initial + k);
		*(initial + k) = *(final + t);
		*(final + t) = num;
		t++;
		k++;
	}

}
