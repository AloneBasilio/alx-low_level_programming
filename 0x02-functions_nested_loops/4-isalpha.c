#include "main.h"
#include <stdio.h>

/*
 * int  _isalpha (int c) -  return a binary
 * paramaters c - int
 * Return 1 or 0
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else 
		return (0);
}
