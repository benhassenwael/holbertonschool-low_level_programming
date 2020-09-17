#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char c;
	for (c = '0' ; c <= '9' ; c++) putchar (c);
	for (c = 'a' ; c <= 'f' ; c++) putchar (c);
	putchar('\n');
	return (0);
}
