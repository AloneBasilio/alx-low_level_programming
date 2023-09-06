#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: a string
 *
 * Return: a string or NULL
 */
char *_strdup(char *str)
{
	char *c;
	int i;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	c = malloc((i + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		c[i] = str[i];
		i++;
	}
	return (c);
}
