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
	for (c = 48 ; c <= 57 ; c++) 
	{
		putchar (c);
		if (c != 57)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
