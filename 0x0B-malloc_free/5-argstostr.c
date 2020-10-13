#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all the given arguments separated by \n
 * @ac: number of arguments
 * @av: arguments vector
 *
 * Return: pointer to a new string or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int size = 0, i, j, k;

	if (!ac || !av)
		return (0);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j++])
			size++;
	}
	str = (char *)malloc(sizeof(char) * (size + ac));
	if (!str)
		return (0);
	for (i = 0, k = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			str[k++] = av[i][j++];
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
