#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes
 * the node at index index of a dlistint_t linked list
 *
 * @head: Pointer to head of the linked list
 * @index: Index of the node
 *
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *position = *head;

	if (head == NULL)
		return (-1);

	while (index != 0 && position != NULL)
	{
		position = position->next;
		index--;
	}

	if (index != 0)
		return (-1);

	if (position != NULL)
	{
		if (position->next != NULL)
			position->next->prev = position->prev;

		if (position->prev != NULL)
			position->prev->next = position->next;
		else
			*head = position->next;

		free(position);
		return (1);
	}
	return (-1);
}
