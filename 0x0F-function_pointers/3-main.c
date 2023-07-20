#include "3-calc.h"
/**
 * main - prints a name as is
 *
 * @argc: param
 *
 * @argv: param
 *
 * Return: Nothing.
 */
int main(int argc, char **argv)
{
	int (*lastfun)(int, int);
	int firstnum;
	int secondnum;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	firstnum = atoi(argv[1]);
	secondnum = atoi(argv[3]);
	lastfun = get_op_func(argv[2]);
	if (lastfun == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' && secondnum == 0) ||
			(argv[2][0] == '%' && secondnum == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", lastfun(firstnum, secondnum));
	return (0);
}
