#include "main.h"

/**
 * main - prints name of program.
 * @argc: number of command line arguments
 * @argv: An array containing the program command line argument
 *
 * Return: Always success
 *
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
