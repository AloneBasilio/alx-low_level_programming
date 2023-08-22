#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: a string
 */
void puts_half(char *str)
{
	int i;
	int len;

	len = (int) strlen(str);
	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len - 1) / 2;
	while (i++ < len)
		putchar(str[i]);

	putchar('\n');
}
