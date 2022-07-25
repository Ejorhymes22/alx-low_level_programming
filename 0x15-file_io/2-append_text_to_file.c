#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file
 * @text_content: text to be appended
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, s, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		s = write(fd, text_content, i);
		if (s == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
