#include "main.h"
/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success, or the corresponding error code on failure
 */
int main(int argc, char *argv[])
{
	int x, y = 0;
	ssize_t rd = 0, wrt = 0;
	char buff[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp x y\n");
		exit(97);
	}
	x = open(argv[1], O_RDONLY);
	if (x == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(x, y);
		exit(98);
	}
	y = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(x);
		exit(99);
	}
	while ((rd = read(x, buff, BUF_SIZE)) > 0)
	{
		wrt = write(y, buff, rd);
		if (wrt != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(x, y);
			exit(99);
		}
	}
	if (close(x) == -1 || close(y) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x, y);
		close(x, y);
		exit(100);
	}
	return (0);
}
