#include "main.h"

/**
  * create_array - is a pointer function that creates an
  * array of chars and initializes
  * them with specific char
  * @size: input int
  * @c: input char
  * Return: a pointer
  * On error, null
  */
char *create_array(unsigned int size, char c)
{
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		a = malloc(sizeof(char) * size);
		if (a == NULL)
		{
			return (NULL);
		}
		else
		{
			a[0] = c;
			return (a);
		}
	}
}
