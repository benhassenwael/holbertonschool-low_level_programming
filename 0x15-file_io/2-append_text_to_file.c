#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * append_text_to_file - append text to a file
 * @filename: file to append to
 * @text_content: text to add
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t size;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		size = write(fd, text_content, len);
	}
	close(fd);
	if (size < 0)
		return (-1);
	return (1);
}
