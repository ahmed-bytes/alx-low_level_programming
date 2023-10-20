#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * @head: head node
 * @str: string to store list
 * Return: address of head node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *node;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;
	new->next = NULL;
	node = *head;

	if (node == NULL)
		*head = new;
	else
	{
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}

	return (*head);
}
