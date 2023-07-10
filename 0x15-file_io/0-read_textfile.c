#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 * to the POSIX standard output.
 * @filename: The name of the text file.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed. Returns 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t file_d, wrt, txt;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	txt = read(file_d, buff, letters);
	wrt = write(STDOUT_FILENO, buff, txt);

	free(buff);
	close(file_d);
	return (wrt);
}
