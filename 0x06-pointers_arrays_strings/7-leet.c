#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - encodes a string into 1337
 * @c: string;
 *
 * Return: string
 */
char *leet(char *c)
{
	int i, j = 0;
	int lcase[] = {97, 101, 111, 116, 108};
	int ucase[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (c[j] != '\0')
	{
		for (i = 0; i <= 4; i++)
		{
			if (c[j] == lcase[i] || c[j] == ucase[i])
			{
				c[j] = n[i];
				break;
			}
		}
	j++;
	}
	return (c);
}
