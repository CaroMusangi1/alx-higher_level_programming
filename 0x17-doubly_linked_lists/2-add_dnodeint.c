#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a listint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
listint_t *add_dnodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *h;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
