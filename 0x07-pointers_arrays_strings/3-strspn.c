#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: first string
 * @accept: secund string
 *
 * Return: length of the same part
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int length;

	length = 0;
	i = j = 0;
/*	for (i = 0; i < strlen(s); i++)*/
	while (&s++ != '\0')
	{
		/*for (j = 0; i < strlen(accept); j++)*/
		while (&accept != '\0')
		{
			if (s[i] == accept[j])
				length++;
		}
	}
	return (length);
}
