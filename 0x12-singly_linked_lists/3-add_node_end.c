#include "lists.h"

/**
 * add_node_end - check the code
 *
 * @head : is a param
 *
 * @str : is a param
 *
 * Return: count.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newhead;
	list_t *current = *head;
	unsigned int length = 0;
	char *string;

	newhead = malloc(sizeof(list_t));
	if (head == NULL || newhead == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		newhead->str = strdup(str);
		if (newhead->str == NULL)
		{
			free(newhead);
			return (NULL);
		}
		string = newhead->str;
		while (string[length] != '\0')
		{
			length++;
		}
		newhead->len = length;
	}
	if (current != NULL)
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newhead;
	}
	else
	{
		*head = newhead;
	}
	return (newhead);
}
