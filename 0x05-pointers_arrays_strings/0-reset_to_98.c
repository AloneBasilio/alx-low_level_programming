#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 updates the value of n  it points to 98
 * @n: value to updates
 * Return: void
 */
void reset_to_98(int *n)
{
	int *pointer;

	pointer = n;
	*pointer = 98;
}
