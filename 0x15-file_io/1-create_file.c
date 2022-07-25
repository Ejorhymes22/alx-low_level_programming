#include "main.h"

/**
 * create_file - creates a file
 * @filename: the filen to be created
 * @text_content: text in file
 *
 * Return: -1 or 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, s;
	int i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[i])
		i++;

	if (text_content)
	{
		s = write(fd, text_content, i);
		if (s == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
