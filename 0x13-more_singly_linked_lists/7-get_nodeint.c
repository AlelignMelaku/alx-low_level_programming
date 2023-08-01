/* Auth:Melaku Alelign: 2023*/
#include "lists.h"
/**
 * get_nodeint_at_index - Locates a given node from the list
 * @head: A pointer the addres head
 * @index: The index of the node to locate - indices start at 0.
 * Return: NULL or node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int get;

	for (get = 0; get < index; get++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
