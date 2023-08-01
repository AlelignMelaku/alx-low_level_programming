#include "lists.h"
/**
 * free_listint - frees
 * @head: pointer to a list.
 */
void free_listint(listint_t *head)
{
	listint_t *free_list;

	while (head)
	{
		free_list = head->next;
		free(head);
		head = free_list;
	}
}
