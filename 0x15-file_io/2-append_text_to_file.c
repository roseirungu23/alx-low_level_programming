#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The text content to append
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, wrt, x;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (x = 0; text_content[x] != '\0';)
			x++;

		wrt = write(file_d, text_content, x);

		if (wrt == -1)
			return (-1);
	}
	close(file_d);
	return (1);
}
