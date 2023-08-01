/*Auth: Melaku Alelign*/
#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address head of list
 * Description: head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *list2;

	if (head == NULL)
		return;
	while (*head)
	{
		list2 = (*head)->next;
		free(*head);
		*head = list2;
	}
	head = NULL;
}
