#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers.
 * @argc: length of arguments
 * @argv: the arguments
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i, result, x;

	if (argc > 1)
	{
		result = 0;
		for (i = 1; i < argc; i++)
		{
			x = atoi(argv[i]);
			if (x == 0)
			{
				printf("Error\n");
				return (1);
			}
			result += x;
		}

		printf("%d\n", result);
	} else
	{
		printf("0\n");
	}
	return (0);
}
