#include "main.h"
/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success, or the corresponding error code on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wrt;
	char buff[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0600);
	rd = read(file_from, buff, BUF_SIZE);
	wrt = write(file_to, buff, rd);
	if (file_to == -1 && wrt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((rd = read(file_from, buff, BUF_SIZE)) > 0)
	{
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
			exit(98);
		}
		if (close(file_from) == -1 && close(file_to) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
			exit(100);
		}
	}
	return (0);
}
