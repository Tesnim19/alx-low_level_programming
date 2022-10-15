#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description checks if random numbers
 * are negative positbe or zero
 * Return -Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is 0\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
