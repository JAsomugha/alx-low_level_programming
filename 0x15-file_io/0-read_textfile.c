#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to standard output
 * @filename: File descriptor
 * @letters: Count
 *
 * Return: Return size_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdis, syz, az;
	char *buff = malloc(sizeof(char) * letters);

	fdis = open(filename, O_RDONLY);
	if ((filename == NULL) || (fdis == -1) || (buff == NULL))
	{
		free(buff);
		return (0);
	}
	syz = read(fdis, buff, letters);
	if (syz == -1)
		return (0);
	buff[syz] = '\0';
	az = write(STDOUT_FILENO, buff, syz);
	if (az == -1)
		return (0);
	close(fdis);
	return (az);
}
