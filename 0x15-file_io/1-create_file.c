#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: creates an empty file if NULL
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 00600);
		if (fd == -1)
			return (-1);
		return (1);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	i = 0;
	while (text_content[i])
	{
		i++;
		count++;
	}

	write(fd, text_content, count);
	close(fd);
	return (1);
}
