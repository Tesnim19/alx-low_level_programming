#include "main.h"

/**
 * print_rev - fuction to print string in reverse
 * @s: input char
 *
 * Return:nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}

	while (--len >= 0)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
