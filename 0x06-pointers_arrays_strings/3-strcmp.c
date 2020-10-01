#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: an integer less than, equal to, or greater  than zero
 * if s1 (or the first n bytes thereof) is found,
 * respectively, to be less than, to match, or be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && (s1[i] && s2[i]); i++)
	{
	}

	return (s1[i] - s2[i]);
}
