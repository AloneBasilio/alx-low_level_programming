#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: a string
 */
void rev_string(char *s)
{
	char *c;
	
	c = s;
	int a;

       	a = strlen(s);

	while (a--)
		c +=s[a]; 
}
