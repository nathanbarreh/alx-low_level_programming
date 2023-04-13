#include "main.h"
/**
 * read_textfile - singly linked list
 * @filename: string - (malloc'ed string)
 * @letters: its a letter
 * Return: a number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, write_data = 0, read_data = 0;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	read_data = read(fd, buf, letters);
	write_data = write(STDOUT_FILENO, buf, read_data);
	close(fd);
	free(buf);
	return (write_data);
}
