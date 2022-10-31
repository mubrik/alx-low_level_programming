#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * @ac: argument count
 * @av: ptr to char array of args
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	char *pr_buff;
	unsigned int file_to_fd, file_from_fd;
	int read_size = 1, w_file, c_ft, c_ff;

	/* arg check */
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open file to / create */
	file_to_fd = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (!file_to_fd)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	/* read file from */
	file_from_fd = open(av[1], O_RDONLY);
	if (!file_from_fd)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(99);

	pr_buff = malloc(BUFF_SIZE);
	if (!pr_buff)
		exit(97);

	/* loop to read with buffer */
	for (; read_size >= 0; read_size -= BUFF_SIZE)
	{
		/* read within buffer */
		read_size = read(file_from_fd, pr_buff, BUFF_SIZE);
		w_file = write(file_to_fd, pr_buff, read_size);
		if (w_file < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	c_ff = close(file_from_fd), c_ft = close(file_to_fd);
	if (c_ff < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c_ff), exit(100);
	if (c_ft < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c_ft), exit(100);

	exit(EXIT_SUCCESS);
}
