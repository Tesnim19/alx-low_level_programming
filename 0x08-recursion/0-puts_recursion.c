#include "main.h"

/**
 * _puts_recursion - is a function that prints
 * the a string using recusion
 * for
 * @s: input string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	_putchar(*s);
	_puts_recursion(s + 1);
}
