#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content to add to the file
 * Return: 1 if success and -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, res, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!text_content)
		text_content = "";
	if (fd == -1)
		return (-1);
	for (len = 0; text_content[len]; len++)
		;
	res = write(fd, text_content, len);
	if (res == -1)
		return (-1);
	close(fd);
	return (1);
}
