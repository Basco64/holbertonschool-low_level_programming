#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at
 * the beginning of a dlistint_t list
 *
 * @h: Header
 *
 * Return: The adress of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newElem = malloc(size(dlistint_t));
	
	if (newElem == NULL)
		return (NULL);

	newElem->n = n;
	newElem->prev = NULL;
	newElem-next = head;

	return (newElem);
}
