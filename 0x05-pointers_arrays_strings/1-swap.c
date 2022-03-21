#include "main.h"
/**
* swap_int - swaps the values
*@a: pointer to a
*@b: ponter to b
*Return: Nothing
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
