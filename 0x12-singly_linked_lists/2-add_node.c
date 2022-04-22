#include "lists.h"
/**
* add_node - Adds a new node at the beginning of a linked list
* @head: The pointer address to header node.
* @str: Pointer to the string of the node.
* Description: This function adds a new node at the beginning
* of a list_t list.
* Return: The address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
