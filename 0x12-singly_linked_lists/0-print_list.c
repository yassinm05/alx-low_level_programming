#include "lists.h"

/**
 * print_list - check the code
 *
 * @h : is a param
 *
 * Return: count.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	int i;
	char *string;

	while (h)
	{
		if (h->str)
		{
			i = 0;
			string = h->str;
			while (string[i] != '\0')
			{
				i++;
			}
			printf("[%d] %s\n", i, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}
