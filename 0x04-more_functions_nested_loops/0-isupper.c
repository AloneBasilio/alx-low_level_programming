#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 * @c: is integer
 *
 * Return: 1 if uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
