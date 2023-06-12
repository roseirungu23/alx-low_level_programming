#include <stdio.h>
#include "main.h"
#include <stdlib.h>

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
	ssize_t nread, nwrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = popen(filename,* O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	nread = fread(fd, buffer, letters);
	nwrite = fwrite(STDUOT_FILENO, buffer, nread);

	fclose(fd);
	free(buffer);
	return (nwrite);
}
