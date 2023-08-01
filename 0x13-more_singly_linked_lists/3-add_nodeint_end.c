#include "lists.h"

/**
 * add_nodeint_end - check the code
 *
 * @head : is a param
 *
 * @n : is a param
 *
 * Return: count.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *new_head;

	node = malloc(sizeof(listint_t));
	if (node == NULL || head == NULL)
	{
		return (NULL);
	}
	node->n = n;
	if (*head != NULL)
	{
		new_head = *head;
		while (new_head->next != NULL)
		{
			new_head = new_head->next;
		}
		new_head->next = node;
	}
	else
	{
		*head = node;
		node->next = NULL;
	}
	return (node);
}
