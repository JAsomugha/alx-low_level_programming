#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: array
 * @size: size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int n = 0, b = 0, len1 = 0, len2 = 0;

	for (; n < size * size; n += size)
	{
		len1 += a[n + b];
		len2 += a[n + (size - 1) - b];
		b++;
	}
	printf("%d, %d\n", len1, len2);
}
