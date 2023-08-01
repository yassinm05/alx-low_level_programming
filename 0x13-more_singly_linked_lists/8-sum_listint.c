#include"lists.h"

/**
 * sum_listint - check the code
 *
 * @head : is a param
 *
 * Return: count.
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	node = head;
	while (node->next != NULL)
	{
		sum = sum + node->n;
		node = node->next;
	}
	sum = sum + node->n;
	return (sum);
}
