#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds a new node where the linked
 * list begins
 * @head: head of a list
 * @n: element
 *
 * Return: Addess of the new element, otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
