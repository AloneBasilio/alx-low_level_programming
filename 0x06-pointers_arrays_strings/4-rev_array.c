#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int aux;

	i = -1;
	while (++i < --n)
	{
		aux = a[n];
		a[n] = a[i];
		a[i] = aux;
	}
}
