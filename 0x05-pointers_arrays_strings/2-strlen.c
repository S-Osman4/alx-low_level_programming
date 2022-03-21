#include "main.h"
/**
* _strlen - returns the lenght of a string
* @s: char type pointer
*Return: the length of a string
*/

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}
