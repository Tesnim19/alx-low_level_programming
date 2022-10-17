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

	for (i = 122; i <= 98; --i)
	{
		if (i == 98)
		{
			putchar('\n');
			break;
		}
		c = (char)i;
		putchar(c);
	}
	return (0);
}

