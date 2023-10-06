#include "main.h"

/**
 * read_textfile - check the code
 *
 * @filename : is a param
 *
 * @letters : is a param
 *
 * Return: count.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char limit[1024 * 8];

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	count = read(fd, &limit[0], letters);
	count = write(STDOUT_FILENO, &limit[0], count);
	close(fd);
	return (count);
}
