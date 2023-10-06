#include "main.h"

/**
 * append_text_to_file - check the code
 *
 * @filename : is a param
 *
 * @text_content : is a param
 *
 * Return: count
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t count = 0;
	ssize_t len = 0;
	char *ptr = text_content;

	if (!filename)
		return (-1);
	while (*ptr)
	{
		len++;
		ptr++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		count = write(fd, text_content, len);
	close(fd);
	return (count == len ? 1 : -1);
}
