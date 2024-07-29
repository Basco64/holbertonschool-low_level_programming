#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at
 * the end of a dlistint_t list
 *
 * @h: Header
 * @n: The value 
 *
 * Return: The adress of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *newElem = malloc(sizeof(dlistint_t));

        if (newElem == NULL)
                return (NULL);

        newElem->n = n;
        newElem->prev = *head;
        newElem->next = NULL;

        return (newElem);
}
