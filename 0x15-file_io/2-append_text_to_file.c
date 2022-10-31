#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file name/path
 * @text_content: text buffer to add to file
 * Return: unsigned int.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	unsigned int fd;

	if (!filename)
		return (-1);
	/* attempt to open in rdonly */
	fd = open(filename, O_RDWR | O_APPEND);
	if (!fd)
		return (-1);

	if (text_content)
		write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}
