#include <stdio.h>

/**
 * main - program that prints numbers from 1 to 100
 * for multiples of three prints Fizz
 * instead of the number and for multiples of five print Buzz
 * Return: 0
 */

int main(void)
{
	int t;

	for (t = 1; t <= 100; t++)
	{
		if (t % 3 == 0 && t % 5 == 0)
			printf("FizzBuzz ");
		else if (t % 3 == 0 && t % 5 != 0)
			printf("Fizz ");
		else if (t == 100)
			printf("Buzz");
		else if (t % 5 == 0 && t % 3 != 0)
			printf("Buzz ");
		else
			printf("%d ", t);
	}
	printf("\n");
	return (0);
}
