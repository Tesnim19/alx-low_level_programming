#include "main.h"

/**
 * print_array - fuction that print n elements of an array
 * @a: input integer
 * @n: input integer
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%c", '\n');
}
