#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - generates random valid passwords
* Return: Always 0
*/
int main(void)
{
	srand((unsigned int)(time(NULL)));

	int i = 0;
	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";
	for ( i = 0; i <=12; i++)
	{
		printf("%c", characters[rand() % (sizeof characters - 1)]);
	}
}
