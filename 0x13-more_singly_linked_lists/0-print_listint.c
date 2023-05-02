#include "lists.h"

/**
 * print_listint - A functionnthat prints all the element of a list
 * @h: Head
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
