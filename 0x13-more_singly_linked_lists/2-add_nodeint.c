#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of a list
 * @head: Head
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp != NULL)
	{
		temp->n = n:
		temp->next = *head;
	       *head = temp;
       		return (*head);	       
	}
	else
		return (NULL);
}
