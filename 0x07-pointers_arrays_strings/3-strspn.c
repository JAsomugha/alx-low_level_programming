#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string destination
 * @accept: characters to check
 *
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, op = 0;

	for (; s[i] != '\0'; i++)
	{
		if (_strchr(accept, s[i]) == NULL)
		{
			break;
		}
		op++;
	}
	return (op);
}

/**
 * _strchr - function that fills memory with a constant byte.
 * @s: string destination
 * @c: character to replace
 *
 * Return: a pointer to the resulting string
 */

char *_strchr(char *s, char c)
{
	int n = 0;

	for (; s[n] != '\0' && s[n] != c; n++)
	{
		continue;
	}
	if (s[n] == c)
		return (s + n);
	else
		return (NULL);
}
