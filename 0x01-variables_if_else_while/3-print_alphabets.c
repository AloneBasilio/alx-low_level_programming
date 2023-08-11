#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	
	int n;
	n = 97;
	while (n < 123)
	{
		putchar(n);
		if (n== 122)
			n=64;
		if (n==90)
			n=122;
		n++;
	}
	putchar('\n');
	return (0);
}
