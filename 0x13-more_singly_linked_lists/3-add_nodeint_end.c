#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - Adds a new node at the
 * end of a linked list.
 * @head: A pointer to the address of the
 * head of the linked list.
 * @n: The integer for the new node to contain.
 *
 * Return: NULL if the function fails.
 * Otherewise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;

	return (*head);
}
