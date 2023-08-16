#include "main.h"
#include <stdio.h>

/*
 * print_alphabet - print the alphabet
 *
 */

void print_alphabet_x10(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		for (j = 97; j < 123; j++)
			putchar(j);
		putchar('\n');
		i++;
	}
}
