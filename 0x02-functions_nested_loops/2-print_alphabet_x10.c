#include <stdio.h>

/**
 * print_alphabet_x10 - fuction to print the alphabet
 * 10 times
 * return - void or 1
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}

