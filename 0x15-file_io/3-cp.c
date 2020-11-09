#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * exit_with - print error and exit with given code
 * @err: error code
 * @file: file name
 * @fd: file descripror id
 *
 */
void exit_with(int err, char *file, int fd)
{
	int ER = STDERR_FILENO;

	switch (err)
	{
		case 98:
			dprintf(ER, "Error: Can't read from file %s\n", file);
			break;
		case 99:
			dprintf(ER, "Error: Can't write to %s\n", file);
			break;
		case 100:
			dprintf(ER, "Error: Can't close fd %d\n", fd);
			break;
	}
	exit(err);
}

/**
 * main - main function
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int fd_orig, fd_cp, cls_orig, cls_cp;
	char buffer[1024];
	mode_t mode;
	ssize_t r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_orig = open(argv[1], O_RDONLY);
	if (fd_orig < 0)
		exit_with(98, argv[1], 0);
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_cp = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_cp < 0)
		exit_with(99, argv[2], 0);
	r = 1;
	while (r > 0)
	{
		r = read(fd_orig, buffer, 1024);
		if (r < 0)
			exit_with(98, argv[1], 0);
		if (r > 0)
		{
			w = write(fd_cp, buffer, r);
			if (w < 0)
				exit_with(99, argv[2], 0);
		}
	}
	cls_orig = close(fd_orig);
	if (cls_orig < 0)
		exit_with(100, NULL, fd_orig);
	cls_cp = close(fd_cp);
	if (cls_cp < 0)
		exit_with(100, NULL, fd_cp);
	return (0);
}
