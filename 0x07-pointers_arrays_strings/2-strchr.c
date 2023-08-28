#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char
 *
 * Return: string
 */
char *_strchr(char *s, char c)
{
/**
 * 	unsigned int n;
 *	unsigned int i;
 *	char *r;
 *
 *	n = strlen(s);
 *	for (i = 0; i < n; i++)
 *	{
 *		if (s[i] != c)
 *			continue;
 *		r+=s[i];
 *	}
 *	if (r != '')
 */		
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
