#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - create a file and write given content
 * @filename: name of the file
 * @text_content: content to write
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t size = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_conten[len]; len++)
			;
		size = write(fd, text_content, len);
	}
	close(fd);
	if (size < 0)
		return (-1);
	return (1);
}
