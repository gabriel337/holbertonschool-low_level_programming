#include "main.h"

/**
 * append_text_to_file - appends text at the end of a line
 * @filename: pointer of string
 * @text_content: NULL terminated string
 * Return: NULL if filename is empty, 1 if file exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	size_t count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY, 00664);

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
