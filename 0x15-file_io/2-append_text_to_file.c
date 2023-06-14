#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_file -appends text at the end of a file
 * @filename:name of the file
 * @text_content: content added
 *
 * Return: 1 if file exists, -1 if it doesn't
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fides;
	int nl;
	int rw;

	if (filename == NULL)
		return (-1);

	fides = open(filename, O_WRONLY | O_APPEND);

	if (fides == -1)
		return (-1);

	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++);
			;

		rw = write(fides, text_content, nl);

		if (rw  == -1)
			return (-1);
	}

	close(fides);

	return (1);
}
