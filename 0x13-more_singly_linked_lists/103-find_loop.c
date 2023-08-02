#include "lists.h"
/**
 * find_listint_loop - Finds the loop
 * @head: A pointer to the head
 * Return: NULL  or node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *m, *b;

	if (head == NULL || head->next == NULL)
		return (NULL);
	m = head->next;
	b = (head->next)->next;
	while (b)
	{
		if (m == b)
		{
			m = head;
			while (m != b)
			{
				m = m->next;
				b = b->next;
			}
			return (m);
		}
		m = m->next;
		b = (b->next)->next;
	}
	return (NULL);
}
