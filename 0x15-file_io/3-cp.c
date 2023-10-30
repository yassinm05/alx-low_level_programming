#include "main.h"
#define FIRST "Usage: cp file_from file_to\n"
#define SECOND "Error: Can't read from file %s\n"
#define THIRD "Error: Can't write to %s\n"
#define FOURTH "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 *  main - Entry point
 *  @ac: Number of arguments
 *  @av: Array of argument strings
 *
 *  Return: 0 on success, otherwise an error code
 */
int main(int ac, char **av)
{
	int firstfd, secondfd;
	ssize_t b;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, FIRST), exit(97);
	}

	firstfd = open(av[1], O_RDONLY);
	if (firstfd == -1)
	{
		dprintf(STDERR_FILENO, SECOND, av[1]), exit(98);
	}
	secondfd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (secondfd == -1)
	{
		dprintf(STDERR_FILENO, THIRD, av[2]), exit(99);
	}
	while ((b = read(firstfd, buf, sizeof(buf))) > 0)
	{
		if (write(secondfd, buf, b) != b)
		{
			dprintf(STDERR_FILENO, THIRD, av[2]), exit(99);
		}
	}
	if (b == -1)
	{
		dprintf(STDERR_FILENO, SECOND, av[1]), exit(98);
	}
	if (close(firstfd) == -1)
	{
		dprintf(STDERR_FILENO, FOURTH, firstfd), exit(100);
	}
	if (close(secondfd) == -1)
	{
		dprintf(STDERR_FILENO, FOURTH, firstfd), exit(100);
	}
	return (EXIT_SUCCESS);
}
