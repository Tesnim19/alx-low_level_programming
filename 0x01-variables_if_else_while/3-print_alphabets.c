#include <stdio.h>

/**
 * main - Entry point
 *
 * Description print alphabet in upper and lower case
 *
 * Return : Always 0 if success
 *
 * return value of 'main' always 0 (Success)/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar((char)i);
		if (i == 122)
		{
			for (c = 65; c <= 90; c++)
			{
				putchar((char)c);
			}
		}
	}
	putchar('\n');
	return (0);
}
