#include "lsists.h"
/**
 * sum_dlistint - prints all the elements of a dlistint_t list.
 * @head : is a param
 *
 * Return: the number of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node != NULL)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}
