#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Prints all the elements of linked list
 * @h: Head of the list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
