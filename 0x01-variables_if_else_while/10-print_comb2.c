#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int c;
	int i;
	for (c = 48; c <= 57; c++) 
	{
		for (i = 48; i <= 57; i++)
		{
			putchar(c);
			putchar(i);
			if (c != 57 || i != 57)
			{	
				putchar(',');
				putchar(' ');
			}	
		}
	}
	putchar('\n');
	return (0);
}
