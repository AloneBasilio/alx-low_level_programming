#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: is string
 */
void print_rev(char *s)
{
	int i = strlen(s);

	while (i--)
		putchar(s[i]);
	putchar('\n');
}
