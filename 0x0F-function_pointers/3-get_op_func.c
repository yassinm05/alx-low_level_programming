#include "3-calc.h"

/**
 * *get_op_func - prints a name as is
 *
 * @s: param
 * Return: Nothing.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s != NULL && *s == ops[i].op[o])
		{
			return (ops[i].f);

		}
		i++;
	}
	return (NULL);
}
