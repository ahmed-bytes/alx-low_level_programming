#include "lists.h"
/**
 * list_len - the number of elements in a linked list_t list
 * @h: head node
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t nodes_num;

	nodes_num = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
