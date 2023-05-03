#include "lists.h"

/**
 * pop_listint -Function deletes the head node
 * of linked list
 * @head: Head of the list
 *
 * Return: The deleted mode data
 */

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *cursor;
	listint_t *h;

	if (*head == NULL)
	{
		return (0);
	}

	cursor = *head;

	hnode = cursor->n;

	h = cursor->next;

	free(cursor);

	*head = h;

	return (hnode);

}
