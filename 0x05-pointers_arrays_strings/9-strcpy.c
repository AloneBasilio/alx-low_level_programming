#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src
 * @dest: string of destine
 * @src: string of source
 * Return: chat
 */
char _strcpy(char *dest, char *src)
{
	char *s = src;
	int i = 0;

	for (; *s != '\0'; i++, s++)
		*(dest + i) = *(src + i);

	dest[i] = '\0';
	return (dest);
}
