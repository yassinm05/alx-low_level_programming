#include "lists.h"
/**
 * get_dnodeint_at_index - prints all the elements of a dlistint_t list
 * @head : is a param
 * @index : is a param
 *
 * Return: the number of nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int in = 0;

	while (head != NULL)
	{
		if (in == index)
			return (head);
		head = head->next;
		in++;
	}
	return (NULL);
}
