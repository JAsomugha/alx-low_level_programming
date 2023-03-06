#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: array
 *
 * Return: void function
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;

	for (; i < 8; i++)
	{
		int n = 0;

		for (; n < 8; n++)
		{
			_putchar(a[i][n]);
		}
		_putchar('\n');
	}
}
