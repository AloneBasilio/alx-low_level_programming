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
	int *aux2;

	aux1 = a;
	aux2 = b;
	*aux1 = 42;
	*aux2 = 98;
}
