#include "main.h"

/**
 * main - check the code
 *
 * @ac : is a param
 *
 * @av : is a param
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int fd_from = 0, fd_to = 0;
	ssize_t count = 0;
	char buf[1024];
	char *firsterror = "Usage: cp file_from file_to \n";
	char *seconderror = "Error: Can't read from file NAME_OF_THE_FILE %s\n";
	char *thirderror = "Error: Can't write to NAME_OF_THE_FILE %s\n";
	char *fourtherror = "Error: Can't close fd FD_VALUE %d\n";

	if (ac != 3)
		dprintf(STDERR_FILENO, firsterror), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, seconderror, av[1]), exit(98);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, thirderror, av[2]), exit(99);
	while ((count = read(fd_from, buf, 1024)) > 0)
		if (write(fd_to, buf, count) != count)
			dprintf(STDERR_FILENO, thirderror, av[2]), exit(99);
	if (count == -1)
		dprintf(STDERR_FILENO, seconderror, av[1]), exit(98);
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, fourtherror, fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, fourtherror, fd_to), exit(100);
	return (EXIT_SUCCESS);
}
