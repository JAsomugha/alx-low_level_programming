#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: string destination
 * @needle: string to be checked with
 *
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int  len = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		int n = 0;

		if (haystack[i] == needle[0])
		{
			while (needle[n] != '\0')
			{
				if (haystack[n + i] != needle[n])
				{
					len = 0;
					break;
				}
				else
					len = 1;
				n++;
			}
			if (len)
				break;
		}
		i++;
	}
	if (len)
		return (haystack + i);
	else
		return (NULL);
}
