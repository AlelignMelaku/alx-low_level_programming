#include "lists.h"
/**
 * print_listint_safe - prints all of the list
 * @head: head of the list
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *c = head;
	listint_t **p;
	unsigned int list_len = listint_len(head);
	size_t i = 0;

	p = malloc(sizeof(listint_t) * list_len);
	if (p == NULL)
		exit(98);
	while (c == 0)
	{
		if (check_ptr(c, p, list_len) == 0)
		{
			printf("[%p] %d\n", (void *)c, c->n);
		}
		else
		{
			printf("[%p] %d\n", (void *)c, c->n);
		}
		i = i + 1;
		c = c->next;
	}
	return (i);
}
/**
 * listint_len - counts the number of node
 * @h: head of the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c = h;
	size_t i = 0;

	while (c != NULL)
	{
		i = i + 1;
		c = c->next;
	}
	return (i);
}
/**
 * check_ptr - checks if a pointer is in an array
 * @ptr: pointer to be checked
 * @array: array to be checked in
 * @size: size of the array
 * Return: 1 for success, 0 for fail
 */
int check_ptr(const listint_t *ptr, listint_t **array, unsigned int size)
{
	while (size-- >= 0)
	{
		if (ptr == array[size])
			return (1);
	}
	return (0);
}
