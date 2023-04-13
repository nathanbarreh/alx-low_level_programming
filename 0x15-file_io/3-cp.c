#include "holberton.h"
/**
 * main - singly linked list
 * @argc: string - (malloc'ed string)
 * @argv: description
 * Return: a number
 */
int main(int argc, char **argv)
{
	int fd, fs, data = 0, wrote = 0;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, ERROR97), exit(97);
	fs = open(argv[1], O_RDONLY);
	if (fs == -1)
		dprintf(STDERR_FILENO, ERROR98, argv[1]), exit(98);
	fd = open(argv[2], (O_CREAT | O_WRONLY | O_TRUNC), 0664);

	while ((data = read(fs, buffer, 1024)) > 0)
	{
		wrote = write(fd, buffer, data);
		if ((wrote != data) || (wrote == -1))
			dprintf(STDERR_FILENO, ERROR99, argv[2]), exit(99);
	}
	if (data == -1)
		dprintf(STDERR_FILENO, ERROR98, argv[1]), exit(98);
	if (close(fd))
		dprintf(STDERR_FILENO, ERROR100, fd), exit(100);
	if (close(fs))
		dprintf(STDERR_FILENO, ERROR100, fs), exit(100);
	return (0);
}
