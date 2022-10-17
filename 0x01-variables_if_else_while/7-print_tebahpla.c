#include <stdio.h>

/**
 * main- Entry point
 *
 * description print lowercase alphabet
 *
 * Return: Always value 0 if success
 */
int main(void)
{
	char c;

	for (c = 'z'; c <= 'a'; --c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

