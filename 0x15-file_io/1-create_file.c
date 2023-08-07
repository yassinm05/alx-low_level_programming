#include "main.h"

/**
 * create_file - check the code
 *
 * @filename : is a param
 *
 * @text_content : is a param
 *
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t count = 0;
	size_t len = 0;
	char *str = text_content;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (len != 0)
	{
		count = write(fd, text_content, len);
	}
	close(fd);
	if (count == len)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
