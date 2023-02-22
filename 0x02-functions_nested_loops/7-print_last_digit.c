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

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (k);
}
