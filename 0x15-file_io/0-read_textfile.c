#include "main.h"

/**
 * read_textfile - read a file and print in POSIX standard output
 * @filename: name of the file
 * @letters: number of letters to read and print
 * Return: NULL file does not exist and 0 if successful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	int fd;
	ssize_t rd, wt;

	fd = open(filename, O_RDONLY);
	if (filename == NULL || fd == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);
	rd = read(fd, ptr, letters);
	wt = write(STDOUT_FILENO, ptr, rd);
	close(fd), free(ptr);
	return (wt);
}
