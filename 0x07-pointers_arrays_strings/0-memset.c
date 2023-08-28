#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: is a string
 * @b: char constant
 * @n: integer lenght
 *
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
