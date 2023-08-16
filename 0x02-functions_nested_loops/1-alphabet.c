#include "main.h"
#include <stdio.h>

/*
 * print_alphabet - print the alphabet
 *
 */

void print_alphabet(void)
{
	int i;
	for(i=97; i < 123; i++)
		putchar(i);
	putchar('\n');
}
