#include "variadic_functions.h"
/**
 * print_numbers - prints numvers
 * @separator: string to be put between numbers
 * @n: number of integers passed to the function
 * @...: infinite paramettes
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		_putchar(va_arg(valist, int));
		if (separator && i < n - 1)
			_putchar(separator);
	}

	_putchar('\n');
	va_end(valist);
}
