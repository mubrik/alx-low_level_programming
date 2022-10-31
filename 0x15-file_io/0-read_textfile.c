#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: file name/path
 * @letters: amt of letters to print
 * Return: unsigned int.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count = 0;
	char *pr_buff;

	if (!filename)
		return (0);
	/* attempt to open in rdonly */
	fd = open(filename, O_RDONLY);
	if (!fd)
		return (0);

	/* alloc print buffer */
	pr_buff = malloc(letters);
	if (!pr_buff)
		return (0);

	/* read to and write from pr_buffer */
	count = read(fd, pr_buff, letters);
	/* check read error */
	if (count < 0)
	{
		free(pr_buff);
		return (0);
	}
	write(STDOUT_FILENO, pr_buff, count);

	free(pr_buff);
	close(fd);
	return (count);
}
