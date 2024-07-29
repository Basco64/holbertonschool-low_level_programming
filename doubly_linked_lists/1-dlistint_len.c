#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list
 *
 * @h: Header
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}

	return (len);
}
