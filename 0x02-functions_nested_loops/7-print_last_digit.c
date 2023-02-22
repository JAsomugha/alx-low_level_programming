#include "main.h"
/**
 *print_last_digit - prints the last digit
 *@k: the number
 *
 *Return: Value of the last digit
 */
int print_last_digit(int k)
{
	int ld = k % 10;

	if (k < 0)
		ld = -ld;
	_putchar(ld + '0');
	return (ld);
}
