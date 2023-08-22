#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < (int) (strlen(str)); i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');


}
