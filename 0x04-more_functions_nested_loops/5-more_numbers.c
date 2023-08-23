#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i;
	int j;
/*	int c;
	bool b;*/

	j = 48;
/*	c = 0; 
	b = false;*/
	for (i = 0; i < 10; i++)
	{
		while (j < 58)
		{
			putchar(j);
			j++;
			if (j == 58)
			{
				j = 48;
			/*	b = true;*/ 	
			}
		/*	while(b)
		*	{
		*		putchar(49);
		*		c++;
		*	}
		*	if (c == 4)
		*		break;	*/
		}
		putchar('\n');
	}
}
