#include "3-calc.h"
/**
 * op_add - adds two numbers a and b
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two numbers
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers a and b
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers a by b
 * @a: first number
 * @b: second number
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
{
	printf("Error\n");
		exit(100);
}
	return (a / b);
}

/**
 * op_mod - remainder of division of a by b
 * @a: first number
 * @b: second number
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
{
	printf("Error\n");
		exit(100);
}
	return (a % b);
}
