#include "main.h"
/**
* puts_half - Prints half of a string.
* @str: The string to be printed.
*Return: Nothing
*/
void puts_half(char *str)
{
	int i = 0, len = 0, half;

	while (str[i++])
		len++;

	if ((len % 2) == 0)
		half = len / 2;
	else
		half = (len + 1) / 2;

	for (i =  half; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
