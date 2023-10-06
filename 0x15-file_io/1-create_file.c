#include "main.h"

/**
 * create_file - check the code
 *
 * @filename : is a param
 *
 * @text_content : is a param
 *
 * Return: count
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t count = 0;
	size_t len = 0;
	int result;

	while (text_content[len] != '\0')
	{
		len++;
	}
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len != 0)
	{
		count = write(fd, text_content, len);
	}
	close(fd);
	if (count == len)
		result = 1;
	else
		result = -1;
	return (result);
}
