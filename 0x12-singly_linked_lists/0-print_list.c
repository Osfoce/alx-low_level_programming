#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of the linked list
 * @h: points to the list_t list to print (the head of a list)
 * 
 * Return: returns the nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t y = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0], (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->n, h->str);
		}
		h = h->next;
		y++;
	}
	return (y);
}
