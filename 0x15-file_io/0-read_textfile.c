#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 * @filename: pointer to string
 * @letters: counts letters of string
 * Return: number of letters it could read
 * and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, reader;
	char *tmp = malloc(sizeof(char *) * letters);

	if (tmp == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	reader = read(fd, tmp, letters);
	write(STDOUT_FILENO, tmp, reader);

	free(tmp);
	close(fd);
	return (reader);
}
