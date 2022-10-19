#include "main.h"

/**
 * print_times_table - fuction for
 * printing n times table
 * @n: given number
 * Return: multiplicatian table
 */
void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (n < 0 || n > 15)
			{
				break;
			k = i * j;
			if (j == 0)
			{
				printf("%d", k);
			}
			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				printf("%d", k);
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				printf("%d", k);
			}
		}
		_putchar('\n');
	}
}
