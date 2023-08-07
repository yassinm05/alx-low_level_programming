#include "main.h"

/**
 * read_textfile - check the code
 *
 * @filename : is a param
 *
 * @letters : is a param
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t count;
	int fd;
	char str[1024];

	if (filename == NULL || letters <= 0)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	count = read(fd, &str, letters);
	count = write(STDOUT_FILENO, &str, count);
	close(fd);
	return (count);
}
