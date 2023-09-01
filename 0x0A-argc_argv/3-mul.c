#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication
 *
 * @argc:lenght of the arguments
 * @argv: int arguments
 *
 * Return: (0);
 */
int main(int argc, char *argv[])
{
	int result, x, y;

	if (argc > 2)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		result = (x * y);
		printf("%d\n", result);
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
