#include "main.h"
/**
* reverse_array - reverse the content of an array of integers
*@a: array to reverse
*@n: number of elements of the array
*Return: Nothing
*/
void reverse_array(int *a, int n)
{
	int temp, i;

	n--;
	for (i = 0; i <= n; i++)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		n--;
	}
}
