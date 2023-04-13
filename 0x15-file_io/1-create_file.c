#include "main.h"

/**
 * create_file - Creates a file and writes text to it
 *
 * @filename: Name of the file to create
 * @text_content: Text to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int input_fd, letters_n, rw;


	if (!filename)
		return (-1);

	input_fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (input_fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters_n = 0; text_content[letters_n]; letters_n++)
		;

	rw = write(input_fd, text_content, letters_n);

	if (rw == -1)
		return (-1);

	close(input_fd);

	return (1);
}

