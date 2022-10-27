#include "main.h"

/**
 * print_rev - fuction to print string in reverse
 * @s: input char
 *
 * Return:nothing
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
