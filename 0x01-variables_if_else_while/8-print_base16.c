#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	i = 48;

	while(i < 103)
	{
		putchar(i);
		if(i == 57)
			i=96;	
		i++;
	}
	putchar('\n');
	return (0);
}
