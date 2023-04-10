#include "main.h"

/**
 * create_file - Appends text to a file.
 * @filename: The file descriptor
 * @text_content: count
 *
 * Return: Return integer
 */

int create_file(const char *filename, char *text_content)
{
	int fdis, az;

	fdis = open(filename, O_WRONLY | O_CREAT | O_APPEND | O_TRUNC, 0600);
	if ((filename == NULL) || (fdis == -1))
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fdis);
		return (1);
	}
	az = write(fdis, text_content, _strlen(text_content));
	if (az == -1)
		return (-1);
	close(fdis);
	return (1);
}

/**
 * _strlen - The length of the string
 * @s: String check
 *
 * Return: Return the lenght of the string
 */

int _strlen(char *s)
{
	int tmp;
	int otpt = 0;

	for (tmp = 0; s[tmp] != '\0'; tmp++)
	{
		otpt += 1;
	}
	return (otpt);
}
