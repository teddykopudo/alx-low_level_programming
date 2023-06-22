#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * of the no. 612852475143
 * Return: 0.
 */

int main(void)
{
	long n = 612852475143;
	long t = 2;
	long k = 0;

	while (n != 1)
	{
		if (n % t == 0)
		{
			n = n / t;
			k = t;
		}
		t += 1;
	}
	printf("%ld\n", k);
	return (0);
}
