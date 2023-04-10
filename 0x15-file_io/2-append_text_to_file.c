#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: The file descriptor
 * @text_content: count
 *
 * Return: Return integer
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdis, az;

	fdis = open(filename, O_WRONLY | O_APPEND);
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
 * @s: String to check
 *
 * Return: Return lenght of string
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
