#include "lists.h"

/**
 * list_len - check the code
 *
 * @h : is a param
 *
 * Return: count.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
