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
	unsigned int i;

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
			for (i = 0; i < size; i++)
			{
				a[i] = c;
			}
			return (a);
		}
	}
}
