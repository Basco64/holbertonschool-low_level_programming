#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at
 * the beginning of a dlistint_t list
 *
 * @head: Header
 * @n: The value
 *
 * Return: The adress of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newElem = malloc(sizeof(dlistint_t));

	if (newElem == NULL)
		return (NULL);

	newElem->n = n;
	newElem->prev = NULL;


	if (head == NULL)
	{
		newElem->next = NULL;
		*head = newElem;
	} else
	{
		newElem->next = *head;
		if (*head)
			(*head)->prev = newElem;
		*head = newElem;
	}

	return (newElem);
}
