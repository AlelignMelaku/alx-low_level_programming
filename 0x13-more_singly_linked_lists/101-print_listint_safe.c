#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints a listint_t list.
 * @head: pointer to head of a list.
 * Return: Length of INT
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *s = head, *f = head;
	size_t i = 0;
	int x = 0;

	while (s && f && f->next)
	{
		if (!(f->next->next))
			break;
		s = s->next;
		f = f->next->next;
		if (s == f)
		{
			s = s->next;
			x = 1;
			break;
		}
	}
	if (!x)
	{
		while (head)
		{
			i++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		return (i);
	}
	while (head)
	{
		i++;
		if (head == s)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (0);
}

