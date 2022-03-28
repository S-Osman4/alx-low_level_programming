#include "main.h"
/**
* *_memset -  fills memory with a constant byte
* @s: memory area.
* @n: bytes filled.
* @b: the contant byte for filling
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for  (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}

