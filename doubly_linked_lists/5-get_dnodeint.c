#include "lists.h"

/**
 *get_dnodeint_at_index - Function that returns the nth node of a dlistint_t linked list
 *
 * @head: Pointer to head of the linked list
 * @index: Index of the node
 *
 * Return: Pointer to the node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head != NULL && index != 0)
	{
		head = head->next;
		index--;
	}

	if (head != NULL && index == 0)
		return (head);

	return (NULL);
}
