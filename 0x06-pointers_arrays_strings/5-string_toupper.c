#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: string
 *
 * Return: string
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\n')
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] = c[i] - 32;
		i++;
	}
	return (c);
}
