#include "lists.h"
/**
* delete_nodeint_at_index - Deletes node at given index.
* @head: Address of pointer 2 first node.
* @index: Index of node to delete.
 * Return: 1 on success, -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = *head, *temp;
	unsigned int i = 0;

	if (*head == NULL)
