#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char
 * @'\0': character null
 *
 * Return: string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
