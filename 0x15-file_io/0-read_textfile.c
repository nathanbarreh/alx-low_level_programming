#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <main.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 *
 * @filename: Path to file to read and print
 * @letters: Maximum number of letters to read and print
 *
 * Return: Number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int input_fd;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);

	input_fd = open(filename, O_RDONLY);
	if (input_fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	lenr = read(input_fd, buffer, letters);
	close(input_fd);

	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}

	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);

	if (lenr != lenw)
		return (0);

	return (lenw);
}

