#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * create_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content written in the file
 *
 * Return: 1 if success, or -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
	int fides;
	int nl;
	int rw;

	if (filename == NULL)
		return (-1);

	fides = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fides == -1)
		return (-1);

	if (text_content == NULL)
	{
		for (nl = 0; text_content[nl]; nl++)
			;
	}

	rw = write(fides, text_content, nl);

	if (rw == -1)
		return (-1);
	close(fides);
	return (1);
}
