#include "lists.h"
/**
 * free_list - frees the list
 * @head: head of the node
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
