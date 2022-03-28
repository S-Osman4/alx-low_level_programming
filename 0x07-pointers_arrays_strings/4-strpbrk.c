#include "main.h"
#include <stdio.h>
/**
* _strspn - gets length of prefix substring
* @s: string to check
* @accept: bytes composing prefix
* Return: integer length of substring
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
		i++;
	}
	return (NULL);
}
