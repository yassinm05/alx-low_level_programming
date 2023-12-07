#include "lists.h"
/**
 * dlistint_len - prints all the elements of a dlistint_t list.
 * @h : is a param
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
