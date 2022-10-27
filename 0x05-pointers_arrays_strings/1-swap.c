#include "main.h"

/**
 * swap_int - swaps two intgers using ponter
 * @a - input integer
 * @b - input integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
