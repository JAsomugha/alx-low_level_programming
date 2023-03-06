#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string destination
 * @accept: string to be checked
 *
 * Return: a pointer to the resulting string
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	for (; s[i] != '\0' && _strchr(accept, s[i]) == NULL; i++)
	{
		continue;
	}
	if (s[i] == '\0')
		return (NULL);
	else
		return (s + i);
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
