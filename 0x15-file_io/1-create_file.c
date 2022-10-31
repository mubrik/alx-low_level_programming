#include <stdio.h>
#include "main.h"

/**
  * _strlen - returns the length of a string.
	* @src_ptr: pointer of char
	* Return: int length
	*/
int _strlen(char *src_ptr)
{
	/* checking if the current value of pointer not null */
	if (*src_ptr != 0)
	{
		/* move the pointer foward and call the function again adding 1! */
		src_ptr++;
		return (1 + _strlen(src_ptr));
	}

	return (0);
}

/**
 * create_file -  creates a file..
 * @filename: file name/path
 * @text_content: text buffer to add to file
 * Return: unsigned int.
 */
int create_file(const char *filename, char *text_content)
{
	unsigned int fd;

	if (!filename)
		return (-1);
	/* attempt to open in rdonly */
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (!fd)
		return (-1);

	if (text_content)
		write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}
