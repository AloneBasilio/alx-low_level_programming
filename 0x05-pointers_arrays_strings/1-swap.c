#include "main.h"
#include <stdio.h>

/**
 * swap_int - change the values
 * @a: first integer
 * @b: secund integer
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int *aux1;

	aux1 = b;
	b = a;
	a = aux1;

}
