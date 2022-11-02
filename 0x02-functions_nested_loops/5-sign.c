#include "main.h"

/**
 * print_sign - print the sign
 * of a number
 * @n: integer to be checked
 * Return: 1 if positive 0 is 0 and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}