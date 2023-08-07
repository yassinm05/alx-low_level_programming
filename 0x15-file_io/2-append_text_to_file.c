#include "main.h"

/**
 * append_text_to_file - check the code
 *
 * @filename : is a param
 *
 * @text_content : is a param
 *
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t count = 0;
	size_t len = 0;
	char *str = text_content;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY);
		if (fd == -1)
			return (-1);
		close(fd);
		return (1);
	}
	else
	{
		while (str[len] != '\0')
			len++;
		fd = open(filename, O_WRONLY | O_APPEND);
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
			return (1);
		else
			return (-1);
	}
}
