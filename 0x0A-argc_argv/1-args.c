#include <stdio.h>
#include <string.h>
/**
 * main - print the number of arguments passed into it
 * @argc: length of arguments
 * @argv: the arguments
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	if (strlen(*argv) > 0)
		printf("%d\n", (argc - 1));
	return (0);
}
