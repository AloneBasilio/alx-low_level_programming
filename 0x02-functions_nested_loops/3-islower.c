#include "main.h"
#include <stdio.h>

/*
 * int  _islower (int c) -  return a binary
 * paramaters c - int
 * Return 1 or 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else 
		return (0);
}
