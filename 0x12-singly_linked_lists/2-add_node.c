#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * @head: head node
 * @str: string to store the linked list
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first_node;
	size_t i;

	first_node = malloc(sizeof(list_t));
	if (first_node == NULL)
		return (NULL);

	first_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	first_node->len = i;
	first_node->next = *head;
	*head = first_node;

	return (*head);
}
