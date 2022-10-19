#include "main.h"

/**
 * print_to_98 - function
 * that prints all natural numbers
 * from
 * @n: given number
 * Return: list of numbers
 */
void print_to_98(int n)
{
	int m = n;

	if (n <= 98)
	{
		while (n <= 98)
		{
			if (m == n)
			{
				printf("%d", n);
			}
			else
			{
				printf(",");
				printf(" ");
				printf("%d", n);
			}
			n++;
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			if (m != 98)
			{
				printf("%d", n);
				printf(",");
				printf(" ");
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
	}
	putchar('\n');
}
