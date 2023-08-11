#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	
	srand(time(NULL));
	int n;
        n= rand() - RAND_MAX/2;
	
	if(n > 0)
	{
		printf("%d is positive\n");
	} else{
		if(n == 0)
		{
			printf("%d is zero\n");
		} else{
			print("%d is negative\n");
		}
	}

	return (0);
}
