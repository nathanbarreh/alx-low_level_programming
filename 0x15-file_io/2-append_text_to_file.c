#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 *
 * @filename: Name of the file to append text to
 * @text_content: Text to append to the file
 *
 * Return: 1 on success, -1 on failure (file does not exist or could not be opened)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int input_fd;
	int let_n;
	int rw;

	if (!filename)
		return (-1);

	input_fd = open(filename, O_WRONLY | O_APPEND);

	if (input_fd == -1)
		return (-1);

	if (text_content)
	{
		for (let_n = 0; text_content[let_n]; let_n++)
			;

		rw = write(input_fd, text_content, let_n);

		if (rw == -1)
			return (-1);
	}

	close(input_fd);

	return (1);
}

