#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: array bidimensional
 * @size: length
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int diag1, diag2;

	diag1 = diag2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				diag1 += a[i][j];
			if ((i + j) == (size - 1))
				diag2 += a[i][j];
		}
	}
	printf("%d, %d", diag1, diag2);
}
