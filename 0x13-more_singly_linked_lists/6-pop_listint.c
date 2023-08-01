#include "lists.h"

/**
 * pop_listint - check the code
 *
 * @head : is a param
 *
 * Return: count.
 */

int pop_listint(listint_t **head)
{
	listint_t *newhead;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	newhead = (*head)->next;
	data = (*head)->n;
	free(*head);
	return (data);
}
