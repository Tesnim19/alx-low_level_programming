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

	for (i = 97; i <= 123; i++)
	{
		if (i == 123)
		{
			putchar("\n");
			break;
		}
		c = (char)i;
		putchar(c);
	}
	return (0);
}

