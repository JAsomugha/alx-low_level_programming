#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: string destination
 * @src: memory area
 * @n: size of bytes to be used
 *
 * Return: a pointer to the resulting string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n && dest[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
