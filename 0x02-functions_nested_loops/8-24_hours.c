#include "main.h"

/**
 * jack_bauer - print every minute
 * including the hour
 * Return: nothing
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar('0' + (j / 10));
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
