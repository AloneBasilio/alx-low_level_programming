#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: a integer
 * @c:char
 *
 * Return: NULL or a pointer
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < (int) size; i++)
		s[i] = c;
	return (s);
}
