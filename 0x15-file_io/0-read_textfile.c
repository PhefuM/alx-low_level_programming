#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  read_textfile - Function that reads a text and prints it
 * @filename: Pointer to the name of the file.
 * @letters: Number of letter the
 *           finction should read and print.
 * Return: 0 - if the function fails or filname is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	nrd = read(fd, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(fd);

	free(buffer);

	return (nwr)
}


