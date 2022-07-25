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
	int fd, s, d, q, a, b;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(av[1], O_RDWR);
	if (fd == -1 || !av[1])
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	d = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	s = read(fd, buff, 1024);
	q = write(d, buff, s);

	if (d == -1 || s == -1 || q == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(fd);
		exit(99);
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
