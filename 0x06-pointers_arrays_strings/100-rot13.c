#include "main.h"
/**
*rot13 - caesers cipher
*@s: pointer to an array of words
*Return: s
*/
char *rot13(char *s)
{
	int a = 0, b;

	char alphabet[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvqxyz";
	char rot13key[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[a])
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == alphabet[b])
			{
				s[a] = rot13key[b];
				break;
			}
		}
		a++;
	}
	return (s);
}
