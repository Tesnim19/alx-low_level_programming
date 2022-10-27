#include "main.h"

/**
 * rev_string - fuction that reveres a string
 * @s: input char
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char *str;

	while (i >= 0)
	{
		if (s[count] == '\0')
			break;
		i++;
	}
	str = s + i;
	*str = *s;

	while (--i >= 0)
	{
		str[j] = s[i];
		j++;
	}
	*s = *str;
}
