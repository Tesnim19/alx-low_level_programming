#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Entry point
 * Description checks if random numbers
 * are negative positbe or zero
 * Return value for function main -Always
 * return value of 'main' is 0 if pass (Success)
 *
 * Return: 0 if exited properly, non-zero otherwise
 */
void positive_or_negative(int n)
{
        if (n == 0)
                printf("%d is zero\n", n);
        else if (n < 0)
                printf("%d is negative\n", n);
        else
                printf("%d is positive\n", n);
}
