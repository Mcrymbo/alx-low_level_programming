#include "main.h"

/**
 * check_error - checks whether the file can be opened
 * @file_from: first file
 * @file_to: second file
 * @av: argument vector
 * Return: no return
 */
void check_error(int file_from, int file_to, char *av[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}
/**
 * main - check the code
 * @ac: argument count
 * @av: argument vector
 * Return: 0 always
 */
int main(int ac, char *av[])
{
	ssize_t ch = 1024, wt;
	int file_from, file_to, error;
	char str[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_from");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_error(file_from, file_to, av);
	while (ch == 1024)
	{
		ch = read(file_from, str, 1024);
		wt = write(file_to, str, ch);
		if (ch == -1)
			check_error(-1, 0, av);
		if (wt == -1)
			check_error(0, -1, av);
	}
	error = close(file_from);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	error = close(file_to);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

