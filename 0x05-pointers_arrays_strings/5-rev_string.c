#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: a string
 */
void rev_string(char *s)
{
	int u = -1, c = 0;
	char *t = s, n;

	while (*t != '\0')
	{
		c++;
		t++;
	}

	while (++u < --c)
	{
		n = *(s + u);
		*(s + u) = *(s + c);
		*(s + c) = n;
	}
}
