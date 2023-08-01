#include "lists.h"
/**
 * add_nodeint_end - Adds a node at the end of the list.
 * @head: A pointer address
 * @n: int data type for new node
 * Return:  return null if fail and new elementif not fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *end;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new_node;
	}
	return (*head);
}
