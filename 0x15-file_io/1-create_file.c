#include "main.h"

/**
 * _strlength - return string length
 *
 * @s : is a param
 *
 * Return: the length of strin
 */
int _strlength(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *create_file - check the code
 *
 * @filename : is a param
 *
 * @text_content : is a param
 *
 *  Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t count = 0;
	ssize_t length = _strlength(text_content);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (length != 0)
		count = write(fd, text_content, length);
	close(fd);
	if (count == length)
		return (1);
	else
		return (-1);
}
