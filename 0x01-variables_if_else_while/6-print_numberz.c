#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar((int)n);
		n++;
	}
	putchar('\n');
	return (0);
}
