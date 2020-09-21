#include <stdio.h>
#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	int i;
	
	if (n <= 98)
	{
		for(i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if(i < 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else
	{
		for(i = n ; i >= 98 ; i--)
		{
			printf("%d", i);
			if(i > 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
}
