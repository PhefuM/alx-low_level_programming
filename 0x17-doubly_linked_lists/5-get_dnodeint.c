#include "lists.h"

/**
 * get_dnodeint_at_index - returns the 
 * nth node of a dlisint_t linked list
 *
 * @head: head of the list 
 * @index: index of the nth node
 *
 * Return: the nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
