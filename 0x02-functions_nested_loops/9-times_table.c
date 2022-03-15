#include "main.h"
/**
g with 0
* row, col, d = digits of current result
* Return: times table
* add extra space past single digit
*/
void times_table(void)
{
	int row, col, d;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for ( col = 1; col <= 9; col++)
		{
			d = (row * col);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
