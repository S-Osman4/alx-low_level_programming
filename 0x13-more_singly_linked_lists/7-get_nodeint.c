/**
* get_nodeint_at_index - find node by index
* @head: Linked list
* @index: index of the node to be finded
* Return: listint_t node with this index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *tmp_node;
	
	if (!head)
		return (NULL);

	tmp_node = head;
	for (; tmp_node && counter < index; counter++)
	{
		tmp_node = tmp_node->next;
	}
	return (tmp_node);
}
