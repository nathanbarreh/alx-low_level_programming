#include "main.h"
/**
 * append_text_to_file - singly linked list
 * @filename: string - (malloc'ed string)
 * @text_content: its is a char
 * Return: a number
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		write(fd, text_content, i);
	}
	close(fd);
	return (1);
}
