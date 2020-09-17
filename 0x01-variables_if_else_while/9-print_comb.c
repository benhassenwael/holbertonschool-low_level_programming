#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
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
