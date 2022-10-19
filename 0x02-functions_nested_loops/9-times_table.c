#include "main.h"

/**
 * times_table - fuction to print times table
 * of 9
 * Return: nothing
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k >= 10)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
				_putchar('0' + (k));
			if (j == 9)
				continue;
			_putchar(',');
			_putchar(' ');
			if (k >= 10)
				continue;
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
