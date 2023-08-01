/* Auth: Melaku : 2023*/
#include "lists.h"
/**
 * sum_listint - Calculates data (n) of a listint_t list
 * @head: A pointer to the head of the listint_t list.
 * Return: 0 or sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum_list = 0;

	while (head)
	{
		sum_list = sum_list + head->n;
		head = head->next;
	}
	return (sum_list);
}
