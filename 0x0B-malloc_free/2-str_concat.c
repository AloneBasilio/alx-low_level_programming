#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: secund string
 *
 * Return: string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, l;

	i = l = 0;
	while (s1[i] != '\0')
	{
		i++;
		l++;
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
		l++;
	}
	s = malloc((l + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = j = 0;
	while(s1[j] != '\0')
	{
		s[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while(s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
