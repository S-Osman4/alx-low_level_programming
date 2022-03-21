#include "main.h"
/**
* puts_half - prints half ofa string
*@str: string to print
*Return: 0 (succes)
*/
void puts_half(char *str)
{
	int i, len, half;

	len = _strlen(str)
	half = (len % 2 == 0) ? len / 2 : (len - 1) / 2 + 1;

	for (i = half; i < len; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
