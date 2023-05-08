#include "main.h"

/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file in which text will be added
 * @text_content: text to add to main file
 * Return: 1 if success and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, rdwt;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		rdwt = write(fd, text_content, i);
		if (rdwt == -1)
			return (-1);
	}
	close(fd);
	return(1);
}
