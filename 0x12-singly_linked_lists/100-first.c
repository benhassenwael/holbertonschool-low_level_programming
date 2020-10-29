#include <stdio.h>

/**
 * startup - constructor function will execute before main()
 *
 */
void __attribute__((constructor)) startup()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
