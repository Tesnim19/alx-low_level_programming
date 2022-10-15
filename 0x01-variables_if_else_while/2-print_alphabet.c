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
	int i;

	for (i = 97; i <= 122; i++)
	{
		c = (char)i;
		putchar(c);
	}
	c = "\n";
	putchar(c);
	return (0);
}

