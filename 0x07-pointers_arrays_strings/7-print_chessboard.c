#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: array's char
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i;
	unsigned int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
