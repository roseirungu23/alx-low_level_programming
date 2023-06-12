#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it
 * @letters: No. of letters to read
 * @filename: name of the file
 *
 * Return: No. of letters it could read and print,
 * or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (buf == NULL)
		return (0);
	nread = read(fd, buf, letters);

	close(fd);
	free(buf);

	return (nread);
}
