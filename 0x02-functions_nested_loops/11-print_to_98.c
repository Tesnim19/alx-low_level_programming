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

	while (n <= 98)
	{
		if (m)
		{
			printf(n);
		}
		else
		{
			printf(",");
			printf(" ");
			printf(n);
		}
		n++;
	}
}
