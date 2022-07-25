#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

#include <unistd.h>

/**
 * read_textfile - reads a nd prints a text file to the osix standard output
 * @filename: name of the textfile to be read
 * @letters: num of letters to be read and printed
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, d;
	char *ptr = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	d = read(fd, ptr, letters);

	printf("%s\n", ptr);
	return (d);

	close(fd);
}
