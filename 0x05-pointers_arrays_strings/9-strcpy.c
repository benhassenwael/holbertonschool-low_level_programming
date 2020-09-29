#include "holberton.h"

/**
 * _strcpy - copy string from arg2 to arg1
 * @dest: pointer to hold copy
 * @src: string to copy
 *
 * Return: char * holding string copy
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
