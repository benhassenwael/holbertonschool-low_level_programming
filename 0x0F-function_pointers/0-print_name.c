/**
 * print_name - prints a given name
 * @name: string name
 * @f: function to print name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
