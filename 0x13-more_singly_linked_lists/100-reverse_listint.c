/*Author:Melaku 2023*/
#include "lists.h"
/**
 * reverse_listint - Reverses list.
 * @head: A pointer to the addres list
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *hd, *back;

	if (head == NULL || *head == NULL)
		return (NULL);
	back = NULL;
	while ((*head)->next != NULL)
	{
		hd = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = hd;
	}
	(*head)->next = back;
	return (*head);
}
