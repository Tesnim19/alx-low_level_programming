#include "main.h"

/**
 * print_last_digit - is a function that print
 * the last digit
 * @n: given number
 * Return: the last digit of the given number
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = -n;
	m = n % 10;
	if (m < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}
