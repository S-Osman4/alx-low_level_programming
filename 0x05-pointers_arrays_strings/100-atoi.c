#include "main.h"
/**
* _atoi - Converts a string to an integer.
* @s: The string to be converted.
* Return: The integer value of the converted string.
*/
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
