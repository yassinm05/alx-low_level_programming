#include "main.h"

#define buff_size 1024
#define firsterror "Usage: cp file_from file_to \n"
#define seconderror "Error: Can't read from file NAME_OF_THE_FILE %s\n"
#define thirderror "Error: Can't write to NAME_OF_THE_FILE %s\n"
#define fourtherror "Error: Can't close fd FD_VALUE %d\n"
#define permissions (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

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
	char buf[buff_size];

	if (ac != 3)
		dprintf(STDERR_FILENO, firsterror), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, seconderror, av[1]), exit(98);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, thirderror, av[2]), exit(99);
	while ((count = read(fd_from, buf, buff_size)) > 0)
	{
		if (write(fd_to, buf, count) != count)
			dprintf(STDERR_FILENO, thirderror, av[2]), exit(99);
	}
	if (count == -1)
		dprintf(STDERR_FILENO, seconderror, av[1]), exit(98);
	
	fd_from = close(fd_from);
	fd_to = close(fd_to);
	if (fd_from)
		dprintf(STDERR_FILENO, fourtherror, fd_from), exit(100);
	if (fd_to)
		dprintf(STDERR_FILENO, fourtherror, fd_to), exit(100);
	return (1);
}
