#include "main.h"
/**
* leet - replace letters with numbers
* @s: pointer to an array of words
* Return: s
*/

char *leet(char *s)
{
	int a, b;

	char code[] = "aeotl";
	char code1[] = "AEOTL";
	char res[] = "43071";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; code[b] != '\0' && code1[b] != '\0'; b++)
		{
			if (s[a] == code[b] || s[a] == code1[b])
			{
				s[a] = res[b];
			}
		}
	}
	return (s);
}
