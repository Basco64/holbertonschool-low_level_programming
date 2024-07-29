#include "lists.h"

/**
 * *insert_dnodeint_at_index - Function that inserts a new
 * node at a given position
 *
 * @h: Pointer to head of the linked list
 * @idx: Index where insert
 * @n: The n value to the new node
 *
 * Return: Pointer to the node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *position;

	if (newNode == NULL)
		return (NULL);

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	position = *h;

	while (position != NULL && position->next != NULL && idx > 1)
	{
		position = position->next;
		idx--;
	}

	newNode->n = n;
	position->next->prev = newNode;
	newNode->prev = position;
	newNode->next = position->next;
	position->next = newNode;

	return (newNode);

}
