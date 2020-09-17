#include <stdio.h>
/**
 * main - main function
 *
 * Description: main func
 * Return: void
 */
int main(void)
{
	int c, i, j;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (j = 48; j <= 57; j++)
			{
				if (i > c && j > i)
				{
					putchar(c);
					putchar(i);
					putchar(j);
					if (c != 55 || i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
