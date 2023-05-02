#include "lists.h"

/**
 * listint_len - Returns the element in the list
 * @h: Head
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while(h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
