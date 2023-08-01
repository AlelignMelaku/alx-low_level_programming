#include "lists.h"
/**
 * pop_listint - Deletes the head node of the list.
 * @head: A pointer to the addres
 * Return: 0 or n
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int m;

	if (*head == NULL)
		return (0);
	pop = *head;
	m = (*head)->n;
	*head = (*head)->next;
	free(pop);
	return (m);
}
