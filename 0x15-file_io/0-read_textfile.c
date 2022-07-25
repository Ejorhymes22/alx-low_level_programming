#include "main.h"

/**
 * read_textfile - reads a nd prints a text file to the osix standard output
 * @filename: name of the textfile to be read
 * @letters: num of letters to be read and printed
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, d, s;
	char *ptr = malloc(sizeof(char) * letters);

	if (!ptr)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	d = read(fd, ptr, letters);
	if (d < 0)
	{
		free(ptr);
		return (0);
	}
	close(fd);
	s = write(STDOUT_FILENO, ptr, d);
	if (s < 0)
	{
		free(ptr);
		return (0);
	}
	return (s);
}
