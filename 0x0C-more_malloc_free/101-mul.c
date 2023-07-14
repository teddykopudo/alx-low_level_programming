#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 0, 0n success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int i;

	if (argc != 3)
{
	printf("Error\n");
	return (98);
}
	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i] != '\0'; i++)
{
	if (!isdigit(num1[i]) || !isdigit(num2[i]))
{
	printf("Error\n");
	return (98);
}
}
	printf("%d\n", atoi(num1) * atoi(num2));

	return (0);
}
