#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Locates node of a listint_t
 * linked list.
 * @head: A pointer to the head of the listint_t list
 * @index: The index of a node to locate, indices start at 0.
 *
 * Return: NULL - if node does not exist.
 * Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		head = head->next;
	}

	return (head);
}
