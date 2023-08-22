#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 updates the value it points to to 98
 * @n: value to updates
 * void
 */
void reset_to_98(int *n)
{
	int *pointer;

	pointer = n;
	*pointer = 98;
}
