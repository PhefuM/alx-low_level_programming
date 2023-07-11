#include "main.h"
#include <stdlib.h>
#include <unistd.h>

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
	ssize_t r, w;
	char *buffer;

	if (filename == NULL)
	{
		return (-1);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDONLY);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (-1);
	}

	r = read(fd, buffer), letters;
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (-1);
	}

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		close(fd);
		return (-1);
	}

	free(buffer);
	close(fd);
	return (r);
}



