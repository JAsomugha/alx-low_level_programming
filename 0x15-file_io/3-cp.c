#include "main.h"

/**
 * main - Copies the content of a file to another file
 * @argc: Count
 * @argv: Array
 *
 * Return: Return integer
 */

int main(int argc, char **argv)
{
	int fdis, fdis1, z = 1024, k;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdis = open(argv[1], O_RDONLY);
	if (fdis == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdis1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdis1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((z = read(fdis, buff, 1024)) != 0)
	{
		if (z == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		k = write(fdis1, buff, z);
		if (k == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_new(fdis);
	close_new(fdis1);
	return (0);
}


/**
 * close_new - Check if it closes
 * @f_n: File descrption
 *
 * Return: Return void
 */
void close_new(int f_n)
{
	if (close(f_n) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_n);
		exit(100);
	}
}
