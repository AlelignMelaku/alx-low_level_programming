#include "lists.h"
/**
 * add_nodeint - Add node at the beginning
 * @head: A pointer to the address of the head
 * @n: The integer for the new node to contain.
 * Return: node data/null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
