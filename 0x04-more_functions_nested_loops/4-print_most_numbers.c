#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	for (; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		putchar(i);
	}
	putchar('\n');
}
