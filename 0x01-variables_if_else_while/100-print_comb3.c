#include <stdio.h>
/**
 * main - main function
 *
 * Description: main func
 * Return: void
 */
int main(void)
{
	int c;
	int i;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
		{
			if (i > c)
			{
				putchar(c);
				putchar(i);
				if (c != 56 || i != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
