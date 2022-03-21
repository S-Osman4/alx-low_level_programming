#include "main.h"
#include <stdio.h>
/**
* print_array - Prints an inputted number of elements of an array
* @a: The array of integers.
* @n: The number of elements to be printed.
* Return: Nothing
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
