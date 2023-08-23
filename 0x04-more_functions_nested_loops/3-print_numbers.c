#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9
 */
void print_numbers(void)
{
	int i;

	i = 48;
	for (; i < 58; i++)
		putchar(i);
	putchar('\n');
}
