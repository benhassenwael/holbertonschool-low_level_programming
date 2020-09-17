#include <stdio.h>

/**
 * main - main function
 *
 * Description: main func
 * Return: void
 */
int main(void)
{
	char c;
	
	for (c = 'a' ; c <= 'z' ; c++) 
	{
		if (c != 'e' && c != 'q')
			putchar (c);
	}
	putchar('\n');
	return (0);
}
