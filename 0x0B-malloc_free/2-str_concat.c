#include "main.h"

/**
  *str_concat - is a function to concatinate two strings
  *@s1: input string
  *@s2: input string
  *Return: pointer if successful
  * On error, return null
  */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, k, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	concat = malloc(sizeof(char) * (i + j + 1));

	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		concat[k] = s1[k];

	size = j;
	for (j = 0; j <= size; k++, j++)
		concat[k] = s2[j];

	return (concat);
}
