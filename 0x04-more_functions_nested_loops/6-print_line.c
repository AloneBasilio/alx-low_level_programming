#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: number of line
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			putchar('_');
			n--;
		}
	}
	putchar('\n');
}
