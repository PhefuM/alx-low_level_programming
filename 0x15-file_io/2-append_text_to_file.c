#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - Function appends text at the
 *                       end of a file
 * @filename: A pointer to the end of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 on success and if filename is NULL - -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (text_content != NULL)
	{
		for (len  = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONGLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);

	return (1);
}

