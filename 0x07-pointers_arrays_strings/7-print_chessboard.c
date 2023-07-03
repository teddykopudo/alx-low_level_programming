#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: input
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, t = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			t = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - t]);
	}
	_putchar('\n');
}
