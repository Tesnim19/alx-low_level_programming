#include "main.h"

/**
 * puts_half - function that print half of the string only
 * @str: input char
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		i++;
	}
	if (i % 2 != 0)
	{
		i = (i - 1) / 2;
	}
	else
		i = i / 2;
	while (i >= 0)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
