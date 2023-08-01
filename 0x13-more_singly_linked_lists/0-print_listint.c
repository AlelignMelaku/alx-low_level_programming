#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print value of a list.
 * @h: pointer to the head of a list.
 * Return: Number of elements in a list.
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
