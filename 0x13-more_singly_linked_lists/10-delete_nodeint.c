/*Auth:Melaku : 2023*/
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node
 * @head: poiter of pointer to
 * @index: position of node to delete.
 * Return: 1 (success) else -1 on fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;

	listint_t *node, *m;

	if (!(*head))
		return (-1);
	x = 0;
	m = NULL;
	node = *head;
	if (!index)
	{
		(*head) = (*head)->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (x == index)
		{
			m->next = node->next;
			free(node);
			return (1);
		}
		m = node;
		node = node->next;
		x++;
	}
	return (-1);
}

