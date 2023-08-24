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
	int j;
	int aux;

	aux = 0;
	i = 0;
	j = (n - 1);
	for(; i < n; i++)
	{
		aux = a[j-i];
		wh(j > (n-2))
		{
			a[i+1] = a[i];
		}
		a[i] = aux;	
	}
}
