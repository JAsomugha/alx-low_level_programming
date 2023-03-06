#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: string destination
 * @b: character to replace
 * @n: size of bytes to be used
 *
 * Return: a pointer to the resulting string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
