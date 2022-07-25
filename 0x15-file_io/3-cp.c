#include "main.h"

/**
 * main - copies the content of a file to another file
 * @ac: count of arguments
 * @av: the arguments
 *
 * Return: exit 98, 97, 99
 */

int main(int ac, char **av)
{
	int fd, s, d, a, b;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	d = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((s = read(fd, buff, 1024)) > 0)
	{
		if (d < 0 || write(d, buff, s) != s)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(fd);
			exit(99);
		}
	}
	if (s < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	a = close(fd);
	b = close(d);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
	return (0);
}
