#include "lists.h"
/**
 * looped_listint_count - Counts the number of unique nodes
 * @head: A pointer to the head
 * Return: 0 or unique nodes
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *m, *h;
	size_t node1 = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	m = head->next;
	h = (head->next)->next;
	while (h)
	{
		if (m == h)
		{
			m = head;
			while (m != h)
			{
				node1++;
				m = m->next;
				h = h->next;
			}
			m = m->next;
			while (m != h)
			{
				node1++;
				m = m->next;
			}
			return (node1);
		}
		m = m->next;
		h = (h->next)->next;
	}
	return (0);
}
/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: head
 * Return: The size of the list
 * Description: head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t node2, index;

	node2 = looped_listint_count(*h);
	if (node2 == 0)
	{
		for (; h != NULL && *h != NULL; node2++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (index = 0; index < node2; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;
	return (node2);
}
