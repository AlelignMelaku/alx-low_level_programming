/*Auth: Melaku */
#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t to check.
 * Return: 0 or nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *t, *m;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	m = (head->next)->next;

	while (m)
	{
		if (t == m)
		{
			t = head;
			while (t != m)
			{
				node++;
				t = t->next;
				m = m->next;
			}

			t = t->next;
			while (t != m)
			{
				node++;
				t = t->next;
			}

			return (node);
		}

		t = t->next;
		m = (m->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a list
 * @head: A ptr to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = looped_listint_len(head);
	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
