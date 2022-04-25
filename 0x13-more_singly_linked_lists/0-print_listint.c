<<<<<<< HEAD
#include "lists.h"
/**
* print_listint - main function
* print_listint - main function
* @h: Pointer to the string.
* Description: This function prints all the elements of a listint_t list.
* Return: The number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
=======

>>>>>>> 8ef213be1e265696d4dec63aa97ed2bf8ba37d00
