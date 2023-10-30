#include "main.h"
/**
 * read_textfile - check the code
 *
 * @filename : is a param
 *
 * @letters : is a param
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t count = 0;
	char buf[1024 * 8];

	if (filename == NULL || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	count = read(file, &buf[0], letters);
	count = write(STDOUT_FILENO, &buf[0], count);
	close(file);
	return (count);
}
