#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node
 * @head: A pointer to the address.
 * @idx: The index of the listint_t list
 * @n: The integer for the new node to contain.
 * Return: NULL or New Node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node2, *d = *head;
	unsigned int node1;

	node2 = malloc(sizeof(listint_t));
	if (node2 == NULL)
		return (NULL);
	node2->n = n;
	if (idx == 0)
	{
		node2->next = d;
		*head = node2;
		return (node2);
	}
	for (node1 = 0; node1 < (idx - 1); node1++)
	{
		if (d == NULL || d->next == NULL)
			return (NULL);
		d = d->next;
	}
	node2->next = d->next;
	d->next = node2;
	return (node2);
}
