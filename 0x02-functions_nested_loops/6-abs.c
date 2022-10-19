#include "main.h"

/**
 * _abs - print the absolute value of an int
 * @n: the integer given
 * Return: the absolute value of the number
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
		return (n);
}
