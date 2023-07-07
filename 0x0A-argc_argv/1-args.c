#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments
 * @argc: number of arguments
 * @argv: array of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv, /*Ignore argv*/
		printf("%d\n", argc - 1);

	return (0);
}
