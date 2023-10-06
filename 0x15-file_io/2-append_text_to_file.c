#include "main.h"

/**
 * _strlen - check the code.
 *
 * @s : is a param
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
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
	ssize_t len =  _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		count = write(fd, text_content, len);
	close(fd);
	if (count == len)
		return (1);
	else
		return (-1);
}
